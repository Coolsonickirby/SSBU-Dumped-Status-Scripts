
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::DamageFlyReflectLr_main(L2CFighterPickel *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  float fVar7;
  undefined8 uVar8;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_HI_GLIDING);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar3 & 1) == 0) {
    lua2cpp::L2CFighterCommon::status_DamageFlyReflectLR(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack80,0x137fd31ff4);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack80,0x15098b9c9d);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    uVar8 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack176,(float)uVar8);
    lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar8 >> 0x20));
    lib::L2CValue::L2CValue(aLStack80,aLStack176);
    lib::L2CValue::L2CValue(aLStack96,aLStack160);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack96,aLStack144);
    lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xa0);
    uVar3 = lib::L2CValue::operator_(aLStack80,aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack208,aLStack144);
      lua2cpp::L2CFighterBase::Vector2__normalize(this,(L2CValue)0x30);
      lib::L2CValue::operator_(aLStack192,aLStack128);
      lib::L2CValue::operator_(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
      pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar2);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar5);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack192,0x157ce9b678);
    HVar6 = lib::L2CValue::as_hash(aLStack192);
    iVar1 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar6,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_KIND_FALL_SPECIAL);
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  return;
}

