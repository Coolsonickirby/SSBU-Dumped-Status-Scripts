
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialNEscape_main(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
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
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  ppBVar9 = &this->moduleAccessor;
  app::lua_bind::ControlModule__reset_flick_x_impl(*ppBVar9);
  app::lua_bind::ControlModule__reset_flick_sub_x_impl(*ppBVar9);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1c);
  lib::L2CValue::L2CValue(aLStack112,0xfe);
  lib::L2CValue::operator_(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_ESCAPE_F);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_N_NO);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack224,iVar3);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x13b748ac00);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,1.0);
        lib::L2CValue::L2CValue(aLStack256,false);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        fVar10 = (float)lib::L2CValue::as_number(aLStack224);
        fVar11 = (float)lib::L2CValue::as_number(aLStack240);
        bVar2 = lib::L2CValue::as_bool(aLStack256);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x12b12a597a);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,1.0);
        lib::L2CValue::L2CValue(aLStack256,false);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        fVar10 = (float)lib::L2CValue::as_number(aLStack224);
        fVar11 = (float)lib::L2CValue::as_number(aLStack240);
        bVar2 = lib::L2CValue::as_bool(aLStack256);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INSTANCE_WORK_ID_FLOAT_USED_ESCAPE_B);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      lib::L2CValue::operator_(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x1c199b4740);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      lib::L2CValue::operator_(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x1646545a65);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator_(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x1ee955870c);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x191807dad6);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator_((L2CValue *)auStack192,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x211c90a112);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator_(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack240);
      lVar1 = -0xd0;
      goto LAB_7100023ae4;
    }
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_N_NO);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack224,iVar3);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x17c0c2e2c6);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,1.0);
      lib::L2CValue::L2CValue(aLStack256,false);
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number(aLStack224);
      fVar11 = (float)lib::L2CValue::as_number(aLStack240);
      bVar2 = lib::L2CValue::as_bool(aLStack256);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x163c54097b);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,1.0);
      lib::L2CValue::L2CValue(aLStack256,false);
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number(aLStack224);
      fVar11 = (float)lib::L2CValue::as_number(aLStack240);
      bVar2 = lib::L2CValue::as_bool(aLStack256);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_N_NO);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack224,iVar3);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x17c7af26df);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,1.0);
        lib::L2CValue::L2CValue(aLStack256,false);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        fVar10 = (float)lib::L2CValue::as_number(aLStack224);
        fVar11 = (float)lib::L2CValue::as_number(aLStack240);
        bVar2 = lib::L2CValue::as_bool(aLStack256);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x163b39cd62);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,1.0);
        lib::L2CValue::L2CValue(aLStack256,false);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        fVar10 = (float)lib::L2CValue::as_number(aLStack224);
        fVar11 = (float)lib::L2CValue::as_number(aLStack240);
        bVar2 = lib::L2CValue::as_bool(aLStack256);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lVar1 = -0x60;
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_N_NO);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack224,iVar3);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x13b0256819);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,1.0);
        lib::L2CValue::L2CValue(aLStack256,false);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        fVar10 = (float)lib::L2CValue::as_number(aLStack224);
        fVar11 = (float)lib::L2CValue::as_number(aLStack240);
        bVar2 = lib::L2CValue::as_bool(aLStack256);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x12b6479d63);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,1.0);
        lib::L2CValue::L2CValue(aLStack256,false);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        fVar10 = (float)lib::L2CValue::as_number(aLStack224);
        fVar11 = (float)lib::L2CValue::as_number(aLStack240);
        bVar2 = lib::L2CValue::as_bool(aLStack256);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INSTANCE_WORK_ID_FLOAT_USED_ESCAPE_F);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      lib::L2CValue::operator_(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x1c0b6243fb);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      lib::L2CValue::operator_(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x16cc283f06);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator_(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x1ee909269f);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x1913af0dd0);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator_((L2CValue *)auStack192,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x21360437cc);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator_(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack240);
      lVar1 = -0xd0;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_ESCAPE_F);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  }
  lVar1 = -0x60;
LAB_7100023ae4:
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INSTANCE_WORK_ID_FLOAT_USED_ESCAPE_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar10);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack240,0x1e0e0e80a0);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    uVar8 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack112,fVar10);
    lib::L2CValue::operator_(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack240,0x1848215e08);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    uVar8 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::operator_(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack240,0x20b22b3466);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    uVar8 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack240,0x1b1c0bc21c);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    uVar8 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::operator_((L2CValue *)auStack192,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack240,0x2321854eff);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    uVar8 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::operator_(aLStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue(aLStack224,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar9,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_TYPE_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack240,0x18ab103862);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar8 = lib::L2CValue::as_integer(aLStack240);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack224,iVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::operator_(aLStack128,aLStack224);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack352,1.0);
  lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::operator_(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::operator_(aLStack368,aLStack224);
  lib::L2CValue::operator_(aLStack304,aLStack128);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::operator_(aLStack112,aLStack288);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::operator_(aLStack112,aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack368);
  fVar10 = (float)lib::L2CValue::as_number(aLStack256);
  app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
  lib::L2CValue::L2CValue(aLStack384,aLStack160);
  lib::L2CValue::L2CValue(aLStack400,(L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::L2CValue(aLStack416,aLStack240);
  lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::operator_(aLStack160,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue(aLStack432,(L2CValue *)auStack192);
  lib::L2CValue::L2CValue(aLStack448,aLStack208);
  lib::L2CValue::L2CValue(aLStack464,aLStack240);
  lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::L2CValue(aLStack304,0x17ce86529b);
  lib::L2CValue::L2CValue(aLStack368,0);
  uVar6 = lib::L2CValue::as_integer(aLStack304);
  uVar8 = lib::L2CValue::as_integer(aLStack368);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack288,fVar10);
  lib::L2CValue::operator_(aLStack272,aLStack288);
  pLVar5 = aLStack112;
  lib::L2CValue::operator_((L2CValue *)auStack192,pLVar5);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CAgent::math_toint((L2CAgent *)aLStack160,pLVar5);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_HIT_XLU_FRAME);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  pLVar5 = (L2CValue *)(uVar6 & 0xffffffff);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,(int)pLVar5,iVar3);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CAgent::math_toint((L2CAgent *)auStack192,pLVar5);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_HIT_NORMAL_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BUTTON_RAPID_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BUTTON_RAPID);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BARRAGE_TRIGGER);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_NEXT_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BARRAGE_BUTTON_ON);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_KEEP_ESCAPE_PENALTY_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_JUMP);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_SPECIAL_N);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_ENABLE_CONTROL_ENERGY);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_ESCAPE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT_BUTTON);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,-1);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_DIR);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,false);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::MotionModule__set_trans_move_speed_no_scale_impl(*ppBVar9,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  bVar2 = app::lua_bind::StopModule__is_stop_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar6 = lib::L2CValue::operator__(aLStack272,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack496,false);
    FUN_7100025260(aLStack480,this,aLStack496);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack496);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
  lib::L2CValue::L2CValue(aLStack112,&DAT_7100025690);
  lib::L2CValue::operator_(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_N_NO);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack272,iVar3);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar6 = lib::L2CValue::operator__(aLStack272,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack272,1);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_08 + -1);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0x3a40337e2c);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_08 + -1);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    pLVar5 = aLStack560;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack272,1);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_07 + -1);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0x3a40337e2c);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_07 + -1);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    pLVar5 = aLStack528;
  }
  lib::L2CValue::_L2CValue(pLVar5);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack576,&DAT_71000256f0);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}
