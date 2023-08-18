
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterFox::status::SpecialHiRushEnd_exec(L2CFighterFox *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Hash40MapEntry ***pppHVar5;
  Hash40 HVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  Hash40MapEntry **appHStack128 [2];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  Hash40MapEntry **local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLOAT_DIR);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_WOLF_KICK);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) goto LAB_7100009ee0;
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLOAT_REVERT_DEGREE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  pppHVar5 = &local_50;
  uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)pppHVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
    lib::L2CAgent::math_abs((L2CAgent *)aLStack112,(L2CValue *)pppHVar5);
    lib::L2CValue::operator_((L2CValue *)appHStack128);
    pppHVar5 = &local_50;
    uVar4 = lib::L2CValue::operator_(aLStack96,(L2CValue *)pppHVar5);
    if ((uVar4 & 1) == 0) {
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,(L2CValue *)pppHVar5);
      uVar4 = lib::L2CValue::operator_(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)appHStack128);
      if ((uVar4 & 1) == 0) goto LAB_7100009db8;
    }
    else {
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)appHStack128);
    }
    lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLOAT_DIR);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)appHStack128);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    pppHVar5 = appHStack128;
  }
  else {
LAB_7100009db8:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    pppHVar5 = &local_50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)pppHVar5);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100009ee0:
  pLVar8 = (L2CValue *)0x31d39a761;
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack96,pLVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
  lib::L2CValue::operator_((L2CValue *)&local_50,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  HVar6 = lib::L2CValue::as_hash(aLStack112);
  uVar4 = lib::L2CValue::as_number((L2CValue *)appHStack128);
  lVar11 = lib::L2CValue::as_number(aLStack160);
  uVar10 = lib::L2CValue::as_number(aLStack176);
  local_50 = (Hash40MapEntry **)(uVar4 & 0xffffffff | lVar11 << 0x20);
  uStack72 = (ulong)uVar10;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar6,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)appHStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue
            ((L2CValue *)appHStack128,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_WOLF_ENABLE_CONTROL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)appHStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)appHStack128);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_WOLF_ENABLE_CONTROL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(int)FIGHTER_KINETIC_TYPE_FALL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)appHStack128,0xfb9679d74);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)appHStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::_L2CValue((L2CValue *)appHStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
    uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::mul_x_speed_max(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

