
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPitBowarrow::status::Fly_exec(L2CWeaponPitBowarrow *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40MapEntry ***pppHVar7;
  L2CValue *in_x2;
  float fVar8;
  uint uVar9;
  long lVar10;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  Hash40MapEntry **local_60;
  lua_State *plStack88;
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_FLAG_SWALLOWED);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PIT_BOWARROW_INSTANCE_WORK_ID_FLOAT_ANGLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar8);
  fVar8 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar8);
  lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)auStack160);
  pLVar6 = (L2CValue *)auStack192;
  lib::L2CValue::operator_(aLStack112,pLVar6);
  lib::L2CAgent::math_sqrt((L2CAgent *)&local_60,pLVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,1e-05);
  uVar4 = lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) goto LAB_710001f61c;
  pLVar6 = (L2CValue *)(auStack160 + 0x10);
  lib::L2CAgent::math_atan((L2CAgent *)auStack160,pLVar6,in_x2);
  lib::L2CAgent::math_deg((L2CAgent *)auStack192,pLVar6);
  lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack192);
  lib::L2CValue::L2CValue(aLStack240,aLStack208);
  while( true ) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,180.0);
    uVar4 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) break;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack240,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  while( true ) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,-180.0);
    uVar4 = lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) break;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack240,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack224,aLStack240);
  lib::L2CValue::operator_(aLStack208,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack224,0xedf6a213d);
  lib::L2CValue::L2CValue(aLStack256,0xdbb78ec54);
  uVar4 = lib::L2CValue::as_integer(aLStack224);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
LAB_710001f544:
    lib::L2CValue::L2CValue((L2CValue *)&local_60,-0.0);
    uVar4 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-180.0);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::operator_(aLStack208);
        uVar4 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack112);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::operator_(aLStack208);
          lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        }
        lib::L2CValue::operator_(aLStack128,aLStack112);
        lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
        goto LAB_710001f5fc;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,180.0);
    uVar4 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) goto LAB_710001f544;
    uVar4 = lib::L2CValue::operator_(aLStack208,aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator_(aLStack112,aLStack208);
    }
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
LAB_710001f5fc:
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
LAB_710001f61c:
  lib::L2CValue::operator_(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,90.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack112);
  lVar10 = lib::L2CValue::as_number((L2CValue *)auStack192);
  uVar9 = lib::L2CValue::as_number(aLStack208);
  local_60 = (Hash40MapEntry **)(uVar4 & 0xffffffff | lVar10 << 0x20);
  plStack88 = (lua_State *)(ulong)uVar9;
  pppHVar7 = &local_60;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)pppHVar7,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack128,(L2CValue *)pppHVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PIT_BOWARROW_INSTANCE_WORK_ID_FLOAT_SPEED);
  pLVar6 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar6);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CAgent::math_cos((L2CAgent *)aLStack112,pLVar6);
  pLVar6 = (L2CValue *)auStack192;
  lib::L2CValue::operator_((L2CValue *)&local_60,pLVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CAgent::math_sin((L2CAgent *)aLStack112,pLVar6);
  lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PIT_BOWARROW_INSTANCE_WORK_ID_FLOAT_ANGLE);
  fVar8 = (float)lib::L2CValue::as_number(aLStack256);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

