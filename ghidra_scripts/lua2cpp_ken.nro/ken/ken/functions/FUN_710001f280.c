
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001f280(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  BattleObjectModuleAccessor **ppBVar4;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  ppBVar4 = &param_2->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_LW);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N2_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_COMMAND1);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_LW);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N2_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_COMMAND1);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_special(param_2);
    lib::L2CValue::operator=(param_1,aLStack80);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_special(param_2);
    lib::L2CValue::operator=(param_1,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar4,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar4,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar4,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_LW);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar4,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack160,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N_COMMAND);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar4,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack176,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N2_COMMAND);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar4,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack192,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S_COMMAND);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar4,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack208,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI_COMMAND);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar4,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack224,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_COMMAND1);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar4,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

