
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDollyFire::status::Hit_exec(L2CWeaponDollyFire *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  undefined8 *this_00;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined8 local_e0;
  ulong uStack216;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 auStack96 [2];
  L2CValue aLStack80 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,1.0);
  uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)auStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack96);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
    uVar4 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack96);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      if ((uVar4 & 1) == 0) goto LAB_7100033740;
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_e0,_WEAPON_DOLLY_FIRE_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE);
      pLVar3 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_e0);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar3);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CAgent::math_rad((L2CAgent *)aLStack80,pLVar3);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack80,pLVar3);
      lib::L2CValue::L2CValue(aLStack128,0xaeadc3bf8);
      lib::L2CValue::L2CValue(aLStack144,0x1d5e336640);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack112,fVar7);
      uVar4 = lib::L2CValue::operator_((L2CValue *)&local_e0,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      if ((uVar4 & 1) != 0) {
        fVar7 = (float)app::lua_bind::PostureModule__rot_x_impl(this->moduleAccessor,0);
        lib::L2CValue::L2CValue(aLStack112,fVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,0xaeadc3bf8);
        lib::L2CValue::L2CValue(aLStack144,0x14b8b6e4bd);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack128,fVar7);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack176);
        pfVar6 = (float *)app::lua_bind::PostureModule__rot_impl(this->moduleAccessor,0);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,*pfVar6);
        lib::L2CValue::L2CValue(aLStack208,pfVar6[1]);
        lib::L2CValue::L2CValue(aLStack192,pfVar6[2]);
        lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_e0);
        lib::L2CValue::operator_(aLStack160,aLStack208);
        lib::L2CValue::operator_(aLStack176,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::operator_(aLStack80,aLStack112);
        lib::L2CValue::operator_(aLStack272,aLStack128);
        lib::L2CValue::operator_(aLStack144,aLStack256);
        uVar8 = lib::L2CValue::as_number(aLStack240);
        uVar9 = lib::L2CValue::as_number(aLStack160);
        uVar2 = lib::L2CValue::as_number(aLStack176);
        local_e0 = CONCAT44(uVar9,uVar8);
        uStack216 = (ulong)uVar2;
        app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_e0,0);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      this_00 = auStack96;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,5);
      uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      this_00 = &local_e0;
    }
    lib::L2CValue::_L2CValue((L2CValue *)this_00);
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_7100033740:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

