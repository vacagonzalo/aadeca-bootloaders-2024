TEX_FILE = presentation

all: $(TEX_FILE).pdf

$(TEX_FILE).pdf: $(TEX_FILE).tex
	pdflatex $(TEX_FILE).tex
	pdflatex $(TEX_FILE).tex # Ejecuta dos veces para generar el índice y referencias

clean:
	rm -f *.aux *.log *.out *.toc *.nav *.snm *.vrb

cleanall: clean
	rm -f $(TEX_FILE).pdf

.PHONY: all clean cleanall
