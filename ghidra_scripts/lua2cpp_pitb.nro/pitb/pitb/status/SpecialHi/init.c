
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPitb::status::SpecialHiRush_init(L2CFighterPitb *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CAgent *pLVar9;
  Hash40 HVar10;
  Hash40MapEntry ***pppHVar11;
  L2CValue *pLVar12;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  float fVar15;
  long lVar16;
  L2CValue aLStack880 [16];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  undefined auStack624 [32];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  undefined auStack464 [32];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  undefined auStack336 [16];
  undefined auStack320 [32];
  L2CValue aLStack288 [16];
  Hash40MapEntry **appHStack272 [2];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  Hash40MapEntry **local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue((L2CValue *)appHStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),0);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_SPECIAL_HI);
  uVar6 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PIT_STATUS_KIND_SPECIAL_HI_RUSH);
    pppHVar11 = &local_70;
    uVar6 = lib::L2CValue::operator__(pLVar5,(L2CValue *)pppHVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar6 & 1) == 0) goto LAB_71000092d0;
    lib::L2CValue::L2CValue((L2CValue *)auStack320,90.0);
    lib::L2CAgent::math_rad((L2CAgent *)auStack320,(L2CValue *)pppHVar11);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,0xa05589c71);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack320);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack336);
    ppBVar13 = &this->moduleAccessor;
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    lib::L2CValue::operator_((L2CValue *)(auStack320 + 0x10),(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,0xa45c54855);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack320);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack336);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    pLVar5 = (L2CValue *)0x1a;
    pLVar9 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CAgent::math_abs(pLVar9,pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack352,0xcee0a3848);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack336);
    pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack352);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,(ulong)pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,fVar14);
    uVar6 = lib::L2CValue::operator_((L2CValue *)auStack320,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar6 & 1) != 0) {
      bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(*ppBVar13,0.0);
      lib::L2CValue::L2CValue(aLStack400,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack400);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar13);
    }
    fVar14 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack416,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pLVar12 = (L2CValue *)0x1a;
    pLVar9 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CAgent::math_abs(pLVar9,pLVar12);
    pLVar12 = (L2CValue *)0x1b;
    pLVar9 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
    lib::L2CAgent::math_abs(pLVar9,pLVar12);
    lib::L2CValue::operator_((L2CValue *)auStack320,(L2CValue *)auStack336);
    pppHVar11 = &local_70;
    uVar6 = lib::L2CValue::operator__(aLStack224,(L2CValue *)pppHVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    if ((uVar6 & 1) != 0) {
      pLVar9 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      lib::L2CValue::operator_(pLVar12,aLStack288);
      lib::L2CAgent::math_atan(pLVar9,(L2CValue *)auStack320,pLVar5);
      pppHVar11 = &local_70;
      lib::L2CValue::operator_(aLStack128,(L2CValue *)pppHVar11);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack128,(L2CValue *)pppHVar11);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue(aLStack384,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack432,0xa0aff278e);
      uVar6 = lib::L2CValue::as_integer(aLStack384);
      uVar7 = lib::L2CValue::as_integer(aLStack432);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack368,fVar14);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.5);
      lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,90.0);
      pLVar5 = aLStack352;
      lib::L2CValue::operator_((L2CValue *)&local_70,pLVar5);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CAgent::math_rad((L2CAgent *)auStack336,pLVar5);
      lib::L2CValue::operator_((L2CValue *)appHStack272,(L2CValue *)auStack320);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack384);
      pppHVar11 = appHStack272;
      uVar6 = lib::L2CValue::operator_(aLStack128,(L2CValue *)pppHVar11);
      if ((uVar6 & 1) != 0) {
        pppHVar11 = appHStack272;
        lib::L2CValue::operator_(aLStack128,(L2CValue *)pppHVar11);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack320);
    lib::L2CAgent::math_cos((L2CAgent *)aLStack128,(L2CValue *)pppHVar11);
    lib::L2CValue::operator_((L2CValue *)(auStack320 + 0x10),aLStack352);
    lib::L2CValue::operator_((L2CValue *)auStack336,aLStack288);
    pppHVar11 = &local_70;
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)pppHVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CAgent::math_sin((L2CAgent *)aLStack128,(L2CValue *)pppHVar11);
    lib::L2CValue::operator_((L2CValue *)(auStack320 + 0x10),(L2CValue *)auStack336);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::L2CValue(aLStack352,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack368,0x15bff81d6f);
    uVar6 = lib::L2CValue::as_integer(aLStack352);
    uVar7 = lib::L2CValue::as_integer(aLStack368);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar14);
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)auStack336);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::L2CValue(aLStack352,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack368,0x15c8ff2df9);
    uVar6 = lib::L2CValue::as_integer(aLStack352);
    uVar7 = lib::L2CValue::as_integer(aLStack368);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar14);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)auStack336);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack352,0x1066a6a23e);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    uVar7 = lib::L2CValue::as_integer(aLStack352);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,iVar2);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack368,0xa28f17495);
    HVar10 = lib::L2CValue::as_hash(aLStack368);
    uVar4 = app::lua_bind::MotionModule__end_frame_from_hash_impl(*ppBVar13,HVar10);
    lib::L2CValue::L2CValue(aLStack352,uVar4);
    lib::L2CValue::operator_(aLStack352,(L2CValue *)auStack336);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::operator_(aLStack352,aLStack256);
    lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::operator_(aLStack240,aLStack160);
    lib::L2CValue::operator_(aLStack352,aLStack256);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::operator_(aLStack256,aLStack256);
    lib::L2CValue::operator_((L2CValue *)auStack336,aLStack256);
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),aLStack432);
    lib::L2CValue::operator_((L2CValue *)auStack208,aLStack352);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.5);
    lib::L2CValue::operator_((L2CValue *)auStack464,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::operator_(aLStack384,(L2CValue *)(auStack464 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack464 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack464);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::operator_((L2CValue *)auStack336,aLStack256);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)(auStack464 + 0x10));
    lib::L2CValue::operator_(aLStack144,aLStack352);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.5);
    lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::operator_(aLStack432,(L2CValue *)auStack464);
    lib::L2CValue::_L2CValue((L2CValue *)auStack464);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack464 + 0x10));
    fVar14 = (float)lib::L2CValue::as_number(aLStack368);
    fVar15 = (float)lib::L2CValue::as_number(aLStack384);
    fVar14 = (float)app::sv_math::vec2_length(fVar14,fVar15);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    pppHVar11 = &local_70;
    lib::L2CValue::operator_((L2CValue *)auStack320,(L2CValue *)pppHVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CAgent::math_abs((L2CAgent *)auStack208,(L2CValue *)pppHVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_((L2CValue *)(auStack464 + 0x10),(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_BRAKE_X)
    ;
    fVar14 = (float)lib::L2CValue::as_number(aLStack432);
    pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,(int)pLVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack464 + 0x10));
    lib::L2CAgent::math_abs((L2CAgent *)aLStack144,pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_((L2CValue *)(auStack464 + 0x10),(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_BRAKE_Y)
    ;
    fVar14 = (float)lib::L2CValue::as_number(aLStack432);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack464 + 0x10));
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::L2CValue(aLStack496,0.0);
    lib::L2CValue::L2CValue(aLStack512,0.0);
    lib::L2CValue::L2CValue(aLStack528,0.0);
    pLVar5 = aLStack496;
    lua2cpp::L2CFighterBase::Vector3__create(this,SUB81(pLVar5,0),(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CAgent::math_cos((L2CAgent *)aLStack128,pLVar5);
    lib::L2CValue::operator_((L2CValue *)auStack320,aLStack368);
    pLVar5 = aLStack288;
    lib::L2CValue::operator_((L2CValue *)&local_70,pLVar5);
    lib::L2CAgent::math_sin((L2CAgent *)aLStack128,pLVar5);
    lib::L2CValue::operator_((L2CValue *)auStack320,aLStack384);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack336,0x162d277af);
    lib::L2CValue::L2CValue(aLStack576,pLVar5);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.5);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack432,0xf56a247c4);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    uVar7 = lib::L2CValue::as_integer(aLStack432);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack384,fVar14);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pLVar5 = aLStack368;
    lib::L2CValue::operator_(aLStack128,pLVar5);
    lib::L2CAgent::math_cos((L2CAgent *)auStack464,pLVar5);
    lib::L2CValue::operator_(aLStack384,(L2CValue *)(auStack464 + 0x10));
    lib::L2CValue::operator_((L2CValue *)&local_70,aLStack288);
    pLVar5 = aLStack368;
    lib::L2CValue::operator_(aLStack128,pLVar5);
    lib::L2CAgent::math_sin((L2CAgent *)auStack624,pLVar5);
    lib::L2CValue::operator_(aLStack384,aLStack480);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack624 + 0x10));
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)auStack624);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack464 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack464);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.333);
    lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x18cdc1683);
    lib::L2CValue::operator_((L2CValue *)auStack464,pLVar5);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.333);
    lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack480,pLVar5);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack336,0x162d277af);
    lib::L2CValue::L2CValue(aLStack672,pLVar5);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack672);
    lib::L2CValue::_L2CValue(aLStack656);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack640);
    lib::L2CValue::_L2CValue((L2CValue *)auStack464);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.666);
    lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x18cdc1683);
    lib::L2CValue::operator_(aLStack480,pLVar5);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.666);
    lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x1fbdb2615);
    lib::L2CValue::operator_((L2CValue *)auStack624,pLVar5);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack336,0x162d277af);
    lib::L2CValue::L2CValue(aLStack720,pLVar5);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack720);
    lib::L2CValue::_L2CValue(aLStack704);
    lib::L2CValue::_L2CValue((L2CValue *)auStack624);
    lib::L2CValue::_L2CValue(aLStack688);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::L2CValue(aLStack736,(L2CValue *)auStack336);
    lib::L2CValue::L2CValue(aLStack752,(L2CValue *)(auStack464 + 0x10));
    lib::L2CValue::L2CValue(aLStack768,(L2CValue *)auStack464);
    lib::L2CValue::L2CValue(aLStack784,aLStack352);
    lib::L2CValue::operator_((L2CValue *)(auStack320 + 0x10),(L2CValue *)auStack320);
    lua2cpp::L2CFighterBase::Vector3__create_bezier_curve
              (this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack800);
    lib::L2CValue::_L2CValue(aLStack784);
    lib::L2CValue::_L2CValue(aLStack768);
    lib::L2CValue::_L2CValue(aLStack752);
    lib::L2CValue::_L2CValue(aLStack736);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack480,0x18cdc1683);
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),pLVar5);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack480,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack160,pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue((L2CValue *)auStack624,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack624);
    app::sv_kinetic_energy::set_accel(this->luaStateAgent);
    lib::L2CValue::_L2CValue((L2CValue *)auStack624);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue((L2CValue *)auStack624,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
    lib::L2CValue::L2CValue(aLStack816,0.0);
    lib::L2CValue::L2CValue(aLStack832,0.0);
    lib::L2CValue::L2CValue(aLStack848,0.0);
    lib::L2CValue::L2CValue(aLStack864,0.0);
    lib::L2CValue::L2CValue(aLStack880,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack624);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack816);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack832);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack848);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack864);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack880);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack880);
    lib::L2CValue::_L2CValue(aLStack864);
    lib::L2CValue::_L2CValue(aLStack848);
    lib::L2CValue::_L2CValue(aLStack832);
    lib::L2CValue::_L2CValue(aLStack816);
    lib::L2CValue::_L2CValue((L2CValue *)auStack624);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::KineticModule__unable_energy_impl(*ppBVar13,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack208 + 0x10));
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar13,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pLVar5 = (L2CValue *)0x31d39a761;
    lib::L2CValue::L2CValue((L2CValue *)auStack624,0x31d39a761);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack128,pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,90.0);
    lib::L2CValue::operator_((L2CValue *)&local_70,aLStack832);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack848,0.0);
    lib::L2CValue::L2CValue(aLStack864,0.0);
    HVar10 = lib::L2CValue::as_hash((L2CValue *)auStack624);
    uVar6 = lib::L2CValue::as_number(aLStack816);
    lVar16 = lib::L2CValue::as_number(aLStack848);
    uVar4 = lib::L2CValue::as_number(aLStack864);
    local_70 = (Hash40MapEntry **)(uVar6 & 0xffffffff | lVar16 << 0x20);
    uStack104 = (ulong)uVar4;
    app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar13,HVar10,(Vector3f *)&local_70,0,0);
    lib::L2CValue::_L2CValue(aLStack864);
    lib::L2CValue::_L2CValue(aLStack848);
    lib::L2CValue::_L2CValue(aLStack816);
    lib::L2CValue::_L2CValue(aLStack832);
    lib::L2CValue::_L2CValue((L2CValue *)auStack624);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_SDIR);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)auStack624);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack624);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_SDIR_INIT);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)auStack624);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack624);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack624,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_MOVE);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack624);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)auStack624);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_((L2CValue *)(auStack320 + 0x10),(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_SPEED);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)auStack624);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack624);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_((L2CValue *)auStack320,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_DISTANCE);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)auStack624);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack624);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)auStack464);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack464 + 0x10));
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    pppHVar11 = (Hash40MapEntry ***)auStack320;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack320,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack320);
    fVar14 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack320);
    fVar14 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack352,0xbbff8a1a5);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack336);
    uVar7 = lib::L2CValue::as_integer(aLStack352);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,fVar14);
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)auStack320);
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,ENERGY_STOP_RESET_TYPE_AIR);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack320);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack208 + 0x10));
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack336);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack320);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    app::KineticUtility::clear_unable_energy(iVar2,pBVar8);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    app::KineticUtility::clear_unable_energy(iVar2,pBVar8);
    pppHVar11 = &local_70;
  }
  lib::L2CValue::_L2CValue((L2CValue *)pppHVar11);
LAB_71000092d0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)appHStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

