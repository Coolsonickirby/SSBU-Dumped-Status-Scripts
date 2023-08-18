
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPurin::status::SpecialNHoldMax_init(L2CFighterPurin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  BattleObjectModuleAccessor *pBVar9;
  Hash40 HVar10;
  L2CValue *this_01;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_01 = aLStack176;
  iVar4 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
  uVar5 = lib::L2CValue::as_integer(pLVar7);
  uVar5 = app::sv_battle_object::kind(uVar5);
  lib::L2CValue::L2CValue(aLStack112,uVar5);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    FUN_7100016fb0(this);
  }
  else {
    FUN_7100016c40(this);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar6 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::KineticUtility::clear_unable_energy(iVar4,pBVar9);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::KineticUtility::clear_unable_energy(iVar4,pBVar9);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT1);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT2);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT3);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT4);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT5);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x1126cc38fb);
  HVar10 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::ControlModule__stop_rumble_kind_impl(this->moduleAccessor,HVar10,0x50000000);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x105ac1086d);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,true);
  HVar10 = lib::L2CValue::as_hash(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::ControlModule__set_rumble_impl
            (this->moduleAccessor,HVar10,iVar4,(bool)(bVar1 & 1),0x50000000);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_71000162f0(this);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KIRBY);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack128,0x1a14c581b9);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    HVar10 = lib::L2CValue::as_hash(aLStack128);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl
              (this->moduleAccessor,iVar4,HVar10,-1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack128,0x1f7fbeb913);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    HVar10 = lib::L2CValue::as_hash(aLStack128);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl
              (this->moduleAccessor,iVar4,HVar10,-1);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KIRBY);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0x1446258935);
    lib::L2CValue::L2CValue(aLStack144,true);
    HVar10 = lib::L2CValue::as_hash(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    iVar4 = app::lua_bind::SoundModule__play_status_se_impl
                      (this->moduleAccessor,HVar10,(bool)(bVar1 & 1),false,false);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,0xcf06f9c14);
    lib::L2CValue::L2CValue(aLStack160,true);
    HVar10 = lib::L2CValue::as_hash(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    iVar4 = app::lua_bind::SoundModule__play_status_se_impl
                      (this->moduleAccessor,HVar10,(bool)(bVar1 & 1),false,false);
    lib::L2CValue::L2CValue(aLStack128,iVar4);
    this_01 = aLStack128;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0x1446258935);
    lib::L2CValue::L2CValue(aLStack144,true);
    HVar10 = lib::L2CValue::as_hash(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    iVar4 = app::lua_bind::SoundModule__play_status_se_impl
                      (this->moduleAccessor,HVar10,(bool)(bVar1 & 1),false,false);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,0x1613202bd9);
    lib::L2CValue::L2CValue(aLStack160,true);
    lib::L2CValue::L2CValue(aLStack176,true);
    HVar10 = lib::L2CValue::as_hash(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    bVar2 = lib::L2CValue::as_bool(aLStack176);
    iVar4 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar10,(bool)(bVar1 & 1),(bool)(bVar2 & 1),false,false,0
                      );
    lib::L2CValue::L2CValue(aLStack128,iVar4);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::_L2CValue(this_01);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,0x143122b9a3);
  HVar10 = lib::L2CValue::as_hash(aLStack160);
  bVar1 = app::lua_bind::SoundModule__is_playing_status_impl(this->moduleAccessor,HVar10);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0x143122b9a3);
    HVar10 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar10,0);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

