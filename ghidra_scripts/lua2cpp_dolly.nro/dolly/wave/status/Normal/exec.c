
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDollyWave::status::Normal_exec(L2CWeaponDollyWave *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  undefined8 local_f0;
  ulong uStack232;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 auStack112 [2];
  L2CValue aLStack96 [16];
  
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,1.0);
  uVar6 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  if ((uVar6 & 1) != 0) goto LAB_71000355b0;
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue((L2CValue *)auStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
  uVar6 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)auStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack112,_WEAPON_DOLLY_WAVE_INSTANCE_WORK_ID_FLAG_TYPE_AIR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,false);
    uVar6 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)auStack112);
    if ((uVar6 & 1) == 0) goto LAB_71000355b0;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    if ((uVar6 & 1) == 0) goto LAB_71000355b0;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_f0,_WEAPON_DOLLY_WAVE_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE);
    pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_f0);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar5);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CAgent::math_rad((L2CAgent *)aLStack96,pLVar5);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar5);
    lib::L2CValue::L2CValue(aLStack144,0xa68069fbe);
    lib::L2CValue::L2CValue(aLStack160,0x1d5e336640);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar8 = lib::L2CValue::as_integer(aLStack160);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    uVar6 = lib::L2CValue::operator_((L2CValue *)&local_f0,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    if ((uVar6 & 1) != 0) {
      fVar10 = (float)app::lua_bind::PostureModule__rot_x_impl(this->moduleAccessor,0);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,0xa68069fbe);
      lib::L2CValue::L2CValue(aLStack160,0x14b8b6e4bd);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
      uVar8 = lib::L2CValue::as_integer(aLStack160);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack192);
      pfVar9 = (float *)app::lua_bind::PostureModule__rot_impl(this->moduleAccessor,0);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,*pfVar9);
      lib::L2CValue::L2CValue(aLStack224,pfVar9[1]);
      lib::L2CValue::L2CValue(aLStack208,pfVar9[2]);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_f0);
      lib::L2CValue::operator_(aLStack176,aLStack224);
      lib::L2CValue::operator_(aLStack192,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::operator_(aLStack96,aLStack128);
      lib::L2CValue::operator_(aLStack288,aLStack144);
      lib::L2CValue::operator_(aLStack160,aLStack272);
      uVar11 = lib::L2CValue::as_number(aLStack256);
      uVar12 = lib::L2CValue::as_number(aLStack176);
      uVar4 = lib::L2CValue::as_number(aLStack192);
      local_f0 = CONCAT44(uVar12,uVar11);
      uStack232 = (ulong)uVar4;
      app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_f0,0);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_f0,_WEAPON_DOLLY_WAVE_INSTANCE_WORK_ID_FLOAT_SPEED_GROUND);
    pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_f0);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar5);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CAgent::math_sin((L2CAgent *)auStack112,pLVar5);
    lib::L2CValue::operator_((L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0.0);
    puVar7 = &local_f0;
    uVar6 = lib::L2CValue::operator_(aLStack144,(L2CValue *)puVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    if ((uVar6 & 1) != 0) {
      lib::L2CAgent::math_cos((L2CAgent *)auStack112,(L2CValue *)puVar7);
      lib::L2CValue::operator_(aLStack128,aLStack160);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,1.0);
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_INSTANCE_WORK_ID_FLAG_SWALLOWED);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack176,_WEAPON_DOLLY_WAVE_INSTANCE_WORK_ID_FLOAT_SWALLOWED_SPEED_MUL);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack160,fVar10);
      lib::L2CValue::operator_((L2CValue *)&local_f0,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack256,fVar10);
    lib::L2CValue::operator_(aLStack128,aLStack256);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_f0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    puVar7 = auStack112;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,5);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    puVar7 = &local_f0;
  }
  lib::L2CValue::_L2CValue((L2CValue *)puVar7);
  lib::L2CValue::_L2CValue(aLStack96);
LAB_71000355b0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

