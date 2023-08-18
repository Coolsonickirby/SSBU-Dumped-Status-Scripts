
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKirbyStarmissile::status::FlyCopy_exec
          (L2CWeaponKirbyStarmissile *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *this_00;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  L2CValue aLStack272 [16];
  ulong auStack256 [2];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,_WEAPON_KIRBY_STARMISSILE_STATUS_WORK_INT_KIND);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack256);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack240,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KIRBY_STARMISSILE_KIND_COPY_CANCEL);
  uVar2 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    fVar4 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar4);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    fVar4 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar4);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_KIRBY_STARMISSILE_STATUS_WORK_FLOAT_BRAKE);
    iVar1 = lib::L2CValue::as_integer(aLStack240);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar4);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar4);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    fVar4 = (float)lib::L2CValue::as_number(aLStack144);
    fVar6 = (float)lib::L2CValue::as_number(aLStack176);
    fVar7 = (float)lib::L2CValue::as_number(aLStack240);
    fVar4 = (float)app::sv_math::vec3_length(fVar4,fVar6,fVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar4);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    uVar2 = lib::L2CValue::operator_(aLStack128,aLStack224);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
      this_00 = &local_60;
    }
    else {
      lib::L2CValue::operator_(aLStack224,aLStack128);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)auStack256);
      lib::L2CValue::operator_(aLStack240,aLStack224);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack256);
      lib::L2CValue::operator_(aLStack224,aLStack128);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack256);
      lib::L2CValue::operator_(aLStack240,aLStack224);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack240);
      this_00 = auStack256;
    }
    lib::L2CValue::_L2CValue((L2CValue *)this_00);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_KIRBY_STARMISSILE_STATUS_WORK_FLOAT_ANGLE);
    iVar1 = lib::L2CValue::as_integer(aLStack240);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar4);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0x110eb1ecf4);
    lib::L2CValue::L2CValue(aLStack272,0xe2332360d);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    uVar3 = lib::L2CValue::as_integer(aLStack272);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack240,fVar4);
    lib::L2CValue::operator_(aLStack112,aLStack240);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    uVar2 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack192,aLStack240);
      lib::L2CValue::_L2CValue(aLStack240);
    }
    lib::L2CValue::operator_(aLStack112,aLStack192);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack240,fVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
    uVar2 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator_(aLStack160);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    uVar2 = lib::L2CValue::as_number(aLStack240);
    lVar8 = lib::L2CValue::as_number((L2CValue *)auStack256);
    uVar5 = lib::L2CValue::as_number(aLStack272);
    local_60 = uVar2 & 0xffffffff | lVar8 << 0x20;
    uStack88 = (ulong)uVar5;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_60,0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KIRBY_STARMISSILE_STATUS_WORK_FLOAT_ANGLE)
    ;
    fVar4 = (float)lib::L2CValue::as_number(aLStack240);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_KIRBY_STARMISSILE_STATUS_WORK_FLOAT_ANGLE);
    iVar1 = lib::L2CValue::as_integer(aLStack240);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar4);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0x110eb1ecf4);
    lib::L2CValue::L2CValue(aLStack272,0xe2332360d);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    uVar3 = lib::L2CValue::as_integer(aLStack272);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack240,fVar4);
    lib::L2CValue::operator_(aLStack112,aLStack240);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    uVar2 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack192,aLStack240);
      lib::L2CValue::_L2CValue(aLStack240);
    }
    lib::L2CValue::operator_(aLStack112,aLStack192);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack240,fVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
    uVar2 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator_(aLStack160);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    uVar2 = lib::L2CValue::as_number(aLStack240);
    lVar8 = lib::L2CValue::as_number((L2CValue *)auStack256);
    uVar5 = lib::L2CValue::as_number(aLStack272);
    local_60 = uVar2 & 0xffffffff | lVar8 << 0x20;
    uStack88 = (ulong)uVar5;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_60,0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KIRBY_STARMISSILE_STATUS_WORK_FLOAT_ANGLE)
    ;
    fVar4 = (float)lib::L2CValue::as_number(aLStack240);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

