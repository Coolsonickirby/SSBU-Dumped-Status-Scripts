
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEflameEsword::status::SpecialSBack_main(L2CWeaponEflameEsword *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
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
  
  FUN_710001ad00(aLStack128,this);
  uVar10 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(float)uVar10);
  lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::L2CValue(aLStack96,aLStack176);
  lib::L2CValue::L2CValue(aLStack112,aLStack160);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::operator_(aLStack128,aLStack144);
  lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack240,0xcedec4cee);
  lib::L2CValue::L2CValue(aLStack256,0x14ddd21299);
  uVar3 = lib::L2CValue::as_integer(aLStack240);
  uVar4 = lib::L2CValue::as_integer(aLStack256);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack224,fVar8);
  uVar3 = lib::L2CValue::operator_(aLStack224,aLStack112);
  if ((uVar3 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_EFLAME_ESWORD_STATUS_KIND_SPECIAL_S_HOP);
    bVar1 = lib::L2CValue::operator__(pLVar5,aLStack96);
    bVar1 = bVar1 ^ 1;
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::operator_(aLStack128,aLStack144);
    lua2cpp::L2CFighterBase::Vector2__normalize(this,(L2CValue)0x10);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack272,aLStack224);
    lua2cpp::L2CFighterBase::Vector2__length_square(this,(L2CValue)0xf0);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar3 = lib::L2CValue::operator__(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack288,0xcedec4cee);
      lib::L2CValue::L2CValue(aLStack304,0xa9e892552);
      uVar3 = lib::L2CValue::as_integer(aLStack288);
      uVar4 = lib::L2CValue::as_integer(aLStack304);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack256,fVar8);
      lib::L2CValue::operator_(aLStack224,aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue(aLStack256,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar5);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar6);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack256);
      pLVar5 = aLStack96;
    }
    else {
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack304,fVar8);
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      lib::L2CValue::operator_(aLStack96,aLStack304);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack320,0xcedec4cee);
      lib::L2CValue::L2CValue(aLStack336,0xa9e892552);
      uVar3 = lib::L2CValue::as_integer(aLStack320);
      uVar4 = lib::L2CValue::as_integer(aLStack336);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::operator_(aLStack288,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar5 = aLStack256;
    }
    lib::L2CValue::_L2CValue(pLVar5);
    pLVar5 = aLStack224;
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack240,0xa9e892552);
    uVar3 = lib::L2CValue::as_integer(aLStack224);
    uVar4 = lib::L2CValue::as_integer(aLStack240);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar5 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar5);
  lib::L2CValue::L2CValue(aLStack96,0x46dcec137);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack256,1.0);
  lib::L2CValue::L2CValue(aLStack288,false);
  HVar7 = lib::L2CValue::as_hash(aLStack96);
  fVar8 = (float)lib::L2CValue::as_number(aLStack224);
  fVar9 = (float)lib::L2CValue::as_number(aLStack256);
  bVar1 = lib::L2CValue::as_bool(aLStack288);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SpecialSBack_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

