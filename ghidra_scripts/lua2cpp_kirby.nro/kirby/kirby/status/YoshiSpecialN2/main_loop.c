
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::YoshiSpecialN2_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar4 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
      uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) goto LAB_710020e9a8;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710020ed98;
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710020e9a8:
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_YOSHI_STATUS_SPECIAL_N_FLAG_SPIT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
    app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0x1229c5dfb4);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    uVar8 = lib::L2CValue::as_number(aLStack128);
    uVar9 = lib::L2CValue::as_number(aLStack96);
    uVar10 = lib::L2CValue::as_number(aLStack144);
    local_50 = CONCAT44(uVar9,uVar8);
    uStack72 = (ulong)uVar10;
    app::lua_bind::KineticModule__add_speed_impl(this->moduleAccessor,(Vector3f *)&local_50);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    goto LAB_710020ed98;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
LAB_710020ec98:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
        goto LAB_710020ed20;
      }
    }
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) goto LAB_710020ec98;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
LAB_710020ed20:
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) != 0) {
    FUN_710020e380(this);
  }
  FUN_710020eef0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710020ed98:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

