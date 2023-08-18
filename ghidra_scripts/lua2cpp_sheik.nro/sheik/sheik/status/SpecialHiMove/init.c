
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSheik::status::SpecialHiMove_init(L2CFighterSheik *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  L2CValue *in_x2;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  L2CValue aLStack528 [16];
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
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  undefined auStack320 [16];
  undefined auStack304 [16];
  undefined auStack288 [32];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0);
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack304,0);
  lib::L2CValue::L2CValue(aLStack352,0);
  lib::L2CValue::operator_(aLStack208,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::operator_(aLStack256,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::operator_((L2CValue *)auStack304,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::operator_(aLStack240,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::operator_(aLStack160,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::operator_((L2CValue *)auStack192,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::operator_((L2CValue *)auStack288,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  ppBVar10 = &this->moduleAccessor;
  fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack352,fVar11);
  lib::L2CValue::operator_((L2CValue *)auStack192,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  fVar11 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack352,fVar11);
  lib::L2CValue::operator_((L2CValue *)auStack288,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)auStack192);
  lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)auStack288);
  pLVar7 = (L2CValue *)auStack320;
  lib::L2CValue::operator_(aLStack128,pLVar7);
  lib::L2CAgent::math_sqrt((L2CAgent *)aLStack112,pLVar7);
  lib::L2CValue::operator_(aLStack224,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack352,1.0);
  uVar6 = lib::L2CValue::operator_(aLStack352,aLStack224);
  lib::L2CValue::_L2CValue(aLStack352);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack352,1.0);
    lib::L2CValue::operator_(aLStack224,aLStack352);
    lib::L2CValue::_L2CValue(aLStack352);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack352,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack352,true);
    lib::L2CValue::operator_(aLStack208,aLStack352);
LAB_71000050ac:
    pLVar7 = aLStack352;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack128,0xaca5b425b);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    in_x2 = (L2CValue *)lib::L2CValue::as_integer(aLStack128);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,(ulong)in_x2);
    lib::L2CValue::L2CValue(aLStack352,fVar11);
    uVar6 = lib::L2CValue::operator_(aLStack224,aLStack352);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack352,true);
      lib::L2CValue::operator_(aLStack208,aLStack352);
      goto LAB_71000050ac;
    }
    lib::L2CValue::L2CValue(aLStack368,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack368);
    uVar15 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar10,uVar3);
    lib::L2CValue::L2CValue(aLStack352,(float)uVar15);
    lib::L2CValue::L2CValue(aLStack336,(float)((ulong)uVar15 >> 0x20));
    lib::L2CValue::L2CValue(aLStack112,aLStack352);
    lib::L2CValue::L2CValue(aLStack128,aLStack336);
    in_x2 = aLStack128;
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,SUB81(in_x2,0));
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x18cdc1683);
    lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),pLVar7);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x1fbdb2615);
    lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),pLVar7);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack288);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)(auStack288 + 0x10));
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)(auStack192 + 0x10));
    fVar11 = (float)app::sv_math::vec2_angle(fVar11,fVar12,fVar13,fVar14);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    pLVar7 = aLStack112;
    lib::L2CValue::operator_(aLStack144,pLVar7);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,90.0);
    lib::L2CAgent::math_rad((L2CAgent *)aLStack128,pLVar7);
    uVar6 = lib::L2CValue::operator_(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      bVar2 = app::lua_bind::GroundModule__is_passable_check_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack208,aLStack112);
        goto LAB_710000528c;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,true);
      lib::L2CValue::operator_(aLStack208,aLStack112);
LAB_710000528c:
      lib::L2CValue::_L2CValue(aLStack112);
    }
    pLVar7 = (L2CValue *)auStack320;
  }
  lib::L2CValue::_L2CValue(pLVar7);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::PostureModule__set_stick_lr_impl(*ppBVar10,0.0);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar10);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::operator_(aLStack256,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::operator_((L2CValue *)auStack192,aLStack256);
    lib::L2CAgent::math_atan((L2CAgent *)auStack288,(L2CValue *)auStack320,in_x2);
    lib::L2CValue::operator_((L2CValue *)auStack304,aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,0xaca5b425b);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack320);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,(ulong)pLVar7);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    pLVar9 = aLStack224;
    uVar6 = lib::L2CValue::operator_(aLStack112,pLVar9);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      bVar2 = app::lua_bind::PostureModule__set_stick_lr_impl(*ppBVar10,0.0);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::_L2CValue(aLStack128);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar10);
      fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      pLVar7 = aLStack112;
      lib::L2CValue::operator_(aLStack256,pLVar7);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,90.0);
      lib::L2CAgent::math_rad((L2CAgent *)auStack320,pLVar7);
      lib::L2CValue::operator_((L2CValue *)auStack304,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::operator_(aLStack224,aLStack112);
      pLVar7 = aLStack112;
      goto LAB_710000550c;
    }
    lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar9);
    lib::L2CValue::L2CValue(aLStack112,0.001);
    uVar6 = lib::L2CValue::operator_(aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      bVar2 = app::lua_bind::PostureModule__set_stick_lr_impl(*ppBVar10,0.0);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      lib::L2CValue::_L2CValue(aLStack112);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar10);
    }
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::operator_(aLStack256,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::operator_((L2CValue *)auStack192,aLStack256);
    lib::L2CAgent::math_atan((L2CAgent *)auStack288,(L2CValue *)auStack320,pLVar7);
    lib::L2CValue::operator_((L2CValue *)auStack304,aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar7 = (L2CValue *)auStack320;
LAB_710000550c:
  lib::L2CValue::_L2CValue(pLVar7);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::L2CValue(aLStack368,GROUND_CORRECT_KIND_AIR);
  GVar4 = lib::L2CValue::as_integer(aLStack368);
  app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
  lib::L2CValue::_L2CValue(aLStack368);
  app::lua_bind::KineticModule__clear_speed_all_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack448,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack464,0xebe665625);
  uVar6 = lib::L2CValue::as_integer(aLStack448);
  uVar8 = lib::L2CValue::as_integer(aLStack464);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack432,fVar11);
  lib::L2CValue::operator_(aLStack224,aLStack432);
  lib::L2CValue::L2CValue(aLStack496,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack512,0xeea7e0463);
  uVar6 = lib::L2CValue::as_integer(aLStack496);
  uVar8 = lib::L2CValue::as_integer(aLStack512);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack480,fVar11);
  pLVar7 = aLStack480;
  lib::L2CValue::operator_(aLStack416,pLVar7);
  lib::L2CAgent::math_cos((L2CAgent *)auStack304,pLVar7);
  lib::L2CValue::operator_(aLStack400,aLStack528);
  lib::L2CValue::operator_(aLStack384,aLStack256);
  lib::L2CValue::operator_(aLStack240,aLStack368);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::L2CValue(aLStack432,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack448,0xebe665625);
  uVar6 = lib::L2CValue::as_integer(aLStack432);
  uVar8 = lib::L2CValue::as_integer(aLStack448);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack416,fVar11);
  lib::L2CValue::operator_(aLStack224,aLStack416);
  lib::L2CValue::L2CValue(aLStack480,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack496,0xeea7e0463);
  uVar6 = lib::L2CValue::as_integer(aLStack480);
  uVar8 = lib::L2CValue::as_integer(aLStack496);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack464,fVar11);
  pLVar7 = aLStack464;
  lib::L2CValue::operator_(aLStack400,pLVar7);
  lib::L2CAgent::math_sin((L2CAgent *)auStack304,pLVar7);
  lib::L2CValue::operator_(aLStack384,aLStack512);
  lib::L2CValue::operator_(aLStack160,aLStack368);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::L2CValue(aLStack368,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack368,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar5 = lib::L2CValue::as_integer(aLStack368);
  app::lua_bind::KineticModule__enable_energy_impl(*ppBVar10,iVar5);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack304);
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

