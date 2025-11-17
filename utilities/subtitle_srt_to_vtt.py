import os


def srt_to_vtt(input_srt):
    base_dir = os.path.dirname(input_srt)

    output_vtt = os.path.join(base_dir, "subtitles.vtt")

    with open(input_srt, "r", encoding="utf-8") as srt_file:
        lines = srt_file.readlines()

    with open(output_vtt, "w", encoding="utf-8") as vtt_file:
        vtt_file.write("WEBVTT\n\n")  # cabecera obligatoria VTT

        for line in lines:
            # Convertir línea de tiempo
            if "-->" in line:
                line = line.replace(",", ".")
            # Ignorar los índices de SRT (números de línea)
            if line.strip().isdigit():
                continue
            vtt_file.write(line)

    print(f"✅ Archivo VTT generado en: {output_vtt}")


if __name__ == "__main__":
    input_srt = r""
    srt_to_vtt(input_srt)
