--
-- Base de données :  `jukebox`
--
CREATE DATABASE jukebox;
--
-- Structure de la table `Musique`
--
USE jukebox;
CREATE TABLE `Musique` (
  `IDMusique` decimal(65,0) NOT NULL,
  `NomMusique` varchar(50) NOT NULL,
  `Genre` varchar(50) NOT NULL,
  `Artiste` varchar(50) NOT NULL,
  `Durée` time NOT NULL,
  `URL` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
ALTER TABLE `Musique` ADD PRIMARY KEY(`ID`);
--
-- Contenu de la table `Musique`
--
INSERT INTO `Musique` (`IDMusique`, `NomMusique`, `Genre`, `Artiste`, `Durée`, `URL`) VALUES
('1', 'musiqueTest1', 'inconnu', 'inconnu', '01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique/'),
('2', 'musiqueTest2', 'inconnu', 'inconnu', '01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique/'),
('3', 'musiqueTest3', 'inconnu', 'inconnu', '01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique/'),
('4', 'musiqueTest4', 'inconnu', 'inconnu', '01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique/'),
('5', 'musiqueTest5', 'inconnu', 'inconnu', '01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique/'),
('6', 'musiqueTest6', 'inconnu', 'inconnu', '01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique/'),
('7', 'musiqueTest7', 'inconnu', 'inconnu', '01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique/'),
('8', 'musiqueTest8', 'inconnu', 'inconnu', '01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique/'),
('9', 'musiqueTest9', 'inconnu', 'inconnu', '01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique/'),
('10', 'musiqueTest10', 'inconnu', 'inconnu', '03:00', '/home/bigbrother4/galvez/DEV/projetJukebox/musique/');
