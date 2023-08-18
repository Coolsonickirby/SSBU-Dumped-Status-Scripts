
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialNHold_init(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  Hash40 HVar9;
  float fVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
  uVar4 = lib::L2CValue::as_integer(pLVar6);
  uVar4 = app::sv_battle_object::kind(uVar4);
  lib::L2CValue::L2CValue(aLStack128,uVar4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_START_TURN);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::_L2CValue(aLStack160);
    fVar10 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar10);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    fVar10 = (float)lib::L2CValue::as_number(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    FUN_71001bfcd0(this);
  }
  else {
    FUN_71001bf960(this);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar8);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar8);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KIND_KIRBY);
  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,0x143122b9a3);
    lib::L2CValue::L2CValue(aLStack176,true);
    HVar9 = lib::L2CValue::as_hash(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    iVar3 = app::lua_bind::SoundModule__play_status_se_impl
                      (this->moduleAccessor,HVar9,(bool)(bVar1 & 1),false,false);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,0x143122b9a3);
    lib::L2CValue::L2CValue(aLStack176,true);
    HVar9 = lib::L2CValue::as_hash(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    iVar3 = app::lua_bind::SoundModule__play_status_se_impl
                      (this->moduleAccessor,HVar9,(bool)(bVar1 & 1),false,false);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

