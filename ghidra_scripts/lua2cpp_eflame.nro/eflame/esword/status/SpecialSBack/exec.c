
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEflameEsword::status::SpecialSBack_exec(L2CWeaponEflameEsword *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CAgent *pLVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  undefined auStack352 [32];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined auStack272 [32];
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
  
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack272 + 0x10),_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLAG_ANGLE_LOCK)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack272 + 0x10));
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  if ((bVar2 & 1U) == 0) {
    uVar12 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),aLStack160);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,aLStack144);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    FUN_710001ad00(aLStack176,this);
    lib::L2CValue::operator_(aLStack176,aLStack128);
    lua2cpp::L2CFighterBase::Vector2__normalize(this,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    uVar12 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),(float)uVar12);
    lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)auStack352,(L2CValue *)(auStack272 + 0x10));
    lib::L2CValue::L2CValue(aLStack96,aLStack240);
    pLVar8 = aLStack96;
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,SUB81(pLVar8,0));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar4 = (L2CAgent *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    lib::L2CAgent::math_atan(pLVar4,pLVar5,pLVar8);
    lib::L2CAgent::math_deg((L2CAgent *)auStack352,pLVar5);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::L2CValue(aLStack288,aLStack192);
    lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xe0);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
    pLVar5 = (L2CValue *)auStack352;
    uVar6 = lib::L2CValue::operator__(aLStack96,pLVar5);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar6 & 1) == 0) {
      pLVar4 = (L2CAgent *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      lib::L2CAgent::math_atan(pLVar4,pLVar5,pLVar8);
      lib::L2CAgent::math_deg((L2CAgent *)auStack352,pLVar5);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::L2CValue(aLStack112,false);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack304,0xcedec4cee);
      lib::L2CValue::L2CValue(aLStack320,0x1185da9dfd);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      uVar7 = lib::L2CValue::as_integer(aLStack320);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)auStack352,iVar3);
      uVar6 = lib::L2CValue::operator_(pLVar5,(L2CValue *)auStack352);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack304,(L2CValue *)auStack272);
        lib::L2CValue::L2CValue(aLStack320,aLStack96);
        lib::L2CValue::L2CValue(aLStack368,true);
        FUN_710001b3e0(auStack352,this,aLStack304,aLStack320,aLStack368);
        lib::L2CValue::operator_((L2CValue *)auStack272,(L2CValue *)auStack352);
        pLVar8 = (L2CValue *)(auStack352 + 0x10);
        pLVar5 = pLVar8;
        lib::L2CValue::operator_(aLStack112,pLVar8);
        lib::L2CValue::_L2CValue(pLVar8);
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack320);
        pLVar8 = aLStack304;
      }
      else {
        lib::L2CValue::L2CValue(aLStack304,(L2CValue *)auStack272);
        lib::L2CValue::L2CValue(aLStack320,aLStack96);
        lib::L2CValue::L2CValue(aLStack368,false);
        FUN_710001b3e0(auStack352,this,aLStack304,aLStack320,aLStack368);
        lib::L2CValue::operator_((L2CValue *)auStack272,(L2CValue *)auStack352);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
        lib::L2CValue::operator_((L2CValue *)auStack272,(L2CValue *)auStack352);
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack352,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLOAT_BASE_ANGLE);
        fVar9 = (float)lib::L2CValue::as_number(aLStack384);
        pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack352);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,(int)pLVar5);
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
        pLVar8 = aLStack384;
      }
      lib::L2CValue::_L2CValue(pLVar8);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack352,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLAG_ANGLE_LOCK);
        pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack352);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,(int)pLVar5);
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack400,1.0);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    lib::L2CAgent::math_rad((L2CAgent *)auStack272,pLVar5);
    fVar9 = (float)lib::L2CValue::as_number(aLStack400);
    fVar10 = (float)lib::L2CValue::as_number(aLStack416);
    fVar11 = (float)lib::L2CValue::as_number(aLStack432);
    uVar12 = app::sv_math::vec2_rot(fVar9,fVar10,fVar11);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,(float)uVar12);
    pLVar5 = (L2CValue *)(auStack352 + 0x10);
    lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)auStack352);
    lib::L2CValue::L2CValue(aLStack112,pLVar5);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(pLVar5);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack400,aLStack224);
    lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack432,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack448,0xacc53ed41);
    uVar6 = lib::L2CValue::as_integer(aLStack432);
    uVar7 = lib::L2CValue::as_integer(aLStack448);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack416,fVar9);
    lib::L2CValue::operator_(aLStack112,aLStack416);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack416,aLStack96);
    lib::L2CValue::L2CValue(aLStack448,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack464,0xe4e64da49);
    uVar6 = lib::L2CValue::as_integer(aLStack448);
    uVar7 = lib::L2CValue::as_integer(aLStack464);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack432,fVar9);
    lib::L2CValue::L2CValue(aLStack496,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack512,0xe7269e510);
    uVar6 = lib::L2CValue::as_integer(aLStack496);
    uVar7 = lib::L2CValue::as_integer(aLStack512);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack480,fVar9);
    lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x20);
    lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::operator_(aLStack384,aLStack96);
    lib::L2CValue::operator_(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar5);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar8);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

