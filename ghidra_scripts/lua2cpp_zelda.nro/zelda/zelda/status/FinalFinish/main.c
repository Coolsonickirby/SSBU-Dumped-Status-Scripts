
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterZelda::status::FinalFinish_main(L2CFighterZelda *this,L2CValue *return_value)

{
  Hash40Map *this_00;
  byte bVar1;
  bool bVar2;
  HitStatus HVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  void *pvVar9;
  BattleObjectModuleAccessor *pBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_XLU);
  HVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar3,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x10841c311a);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar8 = lib::L2CValue::as_hash(aLStack96);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    fVar12 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xcd0c7600f);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar8 = lib::L2CValue::as_hash(aLStack96);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    fVar12 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ZELDA_STATUS_FINAL_FLAG_FINISH);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ZELDA_STATUS_FINAL_WORK_INT_TARGET_OBJECT_ID);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::sv_battle_object::is_null(uVar5);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack128);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    pLVar6 = aLStack96;
  }
  else {
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::sv_battle_object::is_active(uVar5);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) goto LAB_710000a040;
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar5);
    if (pvVar9 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,pvVar9);
    }
    HVar8 = app::sv_global_parameter::melee_rule_type();
    lib::L2CValue::L2CValue(aLStack144,HVar8);
    lib::L2CValue::L2CValue(aLStack176,0);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
    fVar11 = (float)app::lua_bind::DamageModule__damage_impl(pBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack160,fVar11);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xce916ad78);
    uVar7 = lib::L2CValue::operator_(aLStack160,pLVar6);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x14b677f115);
      uVar7 = lib::L2CValue::operator__(aLStack144,aLStack96);
      uVar7 = uVar7 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      uVar7 = 1;
    }
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    this_00 = &this[1].functions;
    if ((uVar7 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x7861d1896);
      lib::L2CValue::L2CValue(aLStack96,&DAT_710000b260);
      lib::L2CValue::operator_(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      iVar4 = _WEAPON_ZELDA_TRIFORCE_STATUS_KIND_BURST;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x19bac6704c);
      lib::L2CValue::L2CValue(aLStack96,iVar4);
      lib::L2CValue::operator_(pLVar6,aLStack96);
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x7861d1896);
      lib::L2CValue::L2CValue(aLStack96,&DAT_710000ae30);
      lib::L2CValue::operator_(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      iVar4 = _WEAPON_ZELDA_TRIFORCE_STATUS_KIND_VANISH;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x19bac6704c);
      lib::L2CValue::L2CValue(aLStack96,iVar4);
      lib::L2CValue::operator_(pLVar6,aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack144;
  }
  lib::L2CValue::_L2CValue(pLVar6);
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710000a040:
  lib::L2CValue::L2CValue(aLStack96,FinalFinish_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

