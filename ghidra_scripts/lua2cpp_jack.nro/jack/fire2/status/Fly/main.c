
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponJackFire2::status::Fly_main(L2CWeaponJackFire2 *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  BattleObjectModuleAccessor *local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_JACK_FIRE_INSTANCE_WORK_ID_INT_PARAM_ID);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  lVar4 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,lVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50f26fef6);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x500814509);
  pLVar7 = (L2CValue *)lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (this->moduleAccessor,(ulong)pLVar7,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CAgent::math_rad((L2CAgent *)(auStack160 + 0x10),pLVar7);
  lib::L2CAgent::math_cos((L2CAgent *)auStack160,pLVar7);
  lib::L2CValue::operator_(aLStack208,aLStack128);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,fVar10);
  pLVar7 = aLStack224;
  lib::L2CValue::operator_((L2CValue *)&local_60,pLVar7);
  lib::L2CAgent::math_sin((L2CAgent *)auStack160,pLVar7);
  lib::L2CValue::operator_(aLStack256,aLStack128);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x40,(L2CValue)0x10);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar8);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  uVar5 = lib::L2CValue::as_number(aLStack208);
  lVar4 = lib::L2CValue::as_number(aLStack224);
  uVar11 = lib::L2CValue::as_number(aLStack256);
  local_60 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar4 << 0x20);
  uStack88 = (ulong)uVar11;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_60,0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar5 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack224,false);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue(aLStack208,0);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_710003d590);
  lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x3538a83b3);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,1.0);
  lib::L2CValue::L2CValue(aLStack288,false);
  HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  fVar10 = (float)lib::L2CValue::as_number(aLStack256);
  fVar12 = (float)lib::L2CValue::as_number(aLStack272);
  bVar1 = lib::L2CValue::as_bool(aLStack288);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar9,fVar10,fVar12,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,Fly_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

