
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::SpecialFAttack_main_loop(L2CFighterDolly *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *this_01;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack192,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) == 0) {
    bVar1 = false;
LAB_710001cb68:
    ppBVar9 = &this->moduleAccessor;
    bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack192,true);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack128);
    if (bVar1) {
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
    }
    if ((uVar6 & 1) != 0) goto LAB_710001cbc8;
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack192,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) == 0) {
LAB_710001ccf8:
      pLVar5 = aLStack128;
LAB_710001cddc:
      lib::L2CValue::_L2CValue(pLVar5);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack192,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar6 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar5,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar6 & 1) == 0) goto LAB_710001ccc0;
        lib::L2CValue::_L2CValue(aLStack128);
LAB_710001cd40:
        lib::L2CValue::L2CValue(aLStack336,false);
        lib::L2CValue::L2CValue(aLStack352,true);
        lib::L2CValue::L2CValue(aLStack368,false);
        lib::L2CValue::L2CValue(aLStack384,&DAT_710001d660);
        lib::L2CValue::L2CValue(aLStack400,&DAT_710001c330);
        lib::L2CValue::L2CValue(aLStack416,false);
        FUN_710001b620(this,aLStack336,aLStack352,aLStack368,aLStack384,aLStack400,aLStack416);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        pLVar5 = aLStack336;
        goto LAB_710001cddc;
      }
LAB_710001ccc0:
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack192,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar6 & 1) != 0) goto LAB_710001ccf8;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack192,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) goto LAB_710001cd40;
    }
    lib::L2CValue::L2CValue(aLStack432,false);
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x17a16ed684);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack192,1);
    lib::L2CValue::operator_(aLStack128,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0x1a6d1cb60b);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack464,fVar10);
    FUN_710001a3e0(this,aLStack432,aLStack448,aLStack464);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack432);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack192,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) == 0) goto LAB_710001d2e0;
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    bVar2 = app::sv_kinetic_energy::is_enable(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack192,true);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) == 0) goto LAB_710001d2e0;
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
    uVar14 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack192,(float)uVar14);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar14 >> 0x20));
    lib::L2CValue::L2CValue(aLStack128,aLStack192);
    lib::L2CValue::L2CValue(aLStack144,aLStack176);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    pLVar8 = (L2CValue *)0x1fbdb2615;
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack240,fVar10);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    fVar10 = (float)lib::L2CValue::as_number(pLVar5);
    fVar11 = (float)lib::L2CValue::as_number(this_01);
    fVar12 = (float)lib::L2CValue::as_number(aLStack240);
    fVar13 = (float)lib::L2CValue::as_number(aLStack256);
    fVar10 = (float)app::sv_math::vec2_angle(fVar10,fVar11,fVar12,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar10);
    lib::L2CAgent::math_deg((L2CAgent *)auStack224,pLVar8);
    lib::L2CValue::L2CValue(aLStack128,90.0);
    lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0xe5b85dd3e);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),fVar10);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack128,aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack272,0x180198cc4f);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack240,fVar10);
      lib::L2CValue::operator_(aLStack144,aLStack240);
      lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)auStack224);
      lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack224 + 0x10));
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack224);
    app::sv_kinetic_energy::set_brake(this->luaStateAgent);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar5 = aLStack160;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack304,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack320,0x170137308f);
    uVar6 = lib::L2CValue::as_integer(aLStack304);
    uVar7 = lib::L2CValue::as_integer(aLStack320);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack288,iVar3);
    uVar6 = lib::L2CValue::operator__(aLStack288,pLVar5);
    if ((uVar6 & 1) == 0) {
      bVar1 = true;
      goto LAB_710001cb68;
    }
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
LAB_710001cbc8:
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_DOLLY_STATUS_KIND_SPECIAL_F_END);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar5 = aLStack192;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_710001d2e0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

