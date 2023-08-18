
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::DamageFlyReflectD_main(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  float *pfVar5;
  Rhombus2 *pRVar6;
  L2CValue *pLVar7;
  L2CValue *this_00;
  ulong uVar8;
  Hash40 HVar9;
  uint uVar10;
  float fVar11;
  long lVar12;
  undefined8 uVar13;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  ulong local_110;
  ulong uStack264;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_HI_GLIDING);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar4 & 1) == 0) {
    lua2cpp::L2CFighterCommon::status_DamageFlyReflectD(this);
  }
  else {
    pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,*pfVar5);
    lib::L2CValue::L2CValue(aLStack160,pfVar5[1]);
    lib::L2CValue::L2CValue(aLStack144,pfVar5[2]);
    FUN_7100009760(aLStack128,this,aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,true);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_110);
    pRVar6 = (Rhombus2 *)
             app::lua_bind::GroundModule__get_rhombus_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x41cff903b);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(pLVar7,0x1fbdb2615);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
    uVar4 = lib::L2CValue::as_number(pLVar3);
    lVar12 = lib::L2CValue::as_number(pLVar7);
    uVar10 = lib::L2CValue::as_number(this_00);
    local_110 = uVar4 & 0xffffffff | lVar12 << 0x20;
    uStack264 = (ulong)uVar10;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_110);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack96,0x137fd31ff4);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_110);
    uVar8 = lib::L2CValue::as_integer(aLStack96);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar4,uVar8);
    lib::L2CValue::L2CValue(aLStack208,fVar11);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_110);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_110);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack96,0x15098b9c9d);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_110);
    uVar8 = lib::L2CValue::as_integer(aLStack96);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar4,uVar8);
    lib::L2CValue::L2CValue(aLStack224,fVar11);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    uVar13 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,(float)uVar13);
    lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&local_110);
    lib::L2CValue::L2CValue(aLStack112,aLStack256);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack112,aLStack240);
    lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x90);
    uVar4 = lib::L2CValue::operator_(aLStack96,aLStack224);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack304,aLStack240);
      lua2cpp::L2CFighterBase::Vector2__normalize(this,(L2CValue)0xd0);
      lib::L2CValue::operator_(aLStack288,aLStack224);
      lib::L2CValue::operator_(aLStack240,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
      pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar3);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,true);
    lua2cpp::L2CFighterCommon::sub_DamageFlyReflect_effect(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack320,0x157ce9b678);
    HVar9 = lib::L2CValue::as_hash(aLStack320);
    iVar2 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar9,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack288,iVar2);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack320,FIGHTER_STATUS_KIND_FALL_SPECIAL);
    lib::L2CValue::L2CValue(aLStack336,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  return;
}

