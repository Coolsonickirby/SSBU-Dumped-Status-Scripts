
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::SpecialLwBite_main(L2CFighterPackun *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  int iVar6;
  Hash40 HVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  ulong *this_05;
  ulong uVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  long lVar15;
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
  ulong local_140;
  ulong uStack312;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  ulong auStack176 [2];
  ulong auStack160 [2];
  undefined8 local_90;
  ulong uStack136;
  
  ppBVar11 = &this->moduleAccessor;
  HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,HVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0x11a514d9d2);
  uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  if ((uVar8 & 1) == 0) {
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,HVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,0x11928d91f6);
    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar8 & 1) != 0) goto LAB_7100024654;
    lib::L2CValue::L2CValue((L2CValue *)&local_140,0x130e29abcf);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,1.0);
    lib::L2CValue::L2CValue(aLStack208,false);
    HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_140);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack208);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar11,HVar7,fVar14,fVar12,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    if ((uVar8 & 1) == 0) goto LAB_7100024c84;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_DEGREE);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_140);
    fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar14);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_90);
    uVar8 = lib::L2CValue::as_number((L2CValue *)auStack160);
    lVar15 = lib::L2CValue::as_number(aLStack208);
    uVar13 = lib::L2CValue::as_number(aLStack224);
    local_140 = uVar8 & 0xffffffff | lVar15 << 0x20;
    uStack312 = (ulong)uVar13;
    app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar11,HVar7,(Vector3f *)&local_140,0,0);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x162d277af);
    lib::L2CValue::L2CValue(aLStack224,0x54f934137);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
    this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
    this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x162d277af);
    HVar7 = lib::L2CValue::as_hash(aLStack224);
    uVar8 = lib::L2CValue::as_number(this_02);
    lVar15 = lib::L2CValue::as_number(this_03);
    uVar13 = lib::L2CValue::as_number(this_04);
    local_90 = uVar8 & 0xffffffff | lVar15 << 0x20;
    uStack136 = (ulong)uVar13;
    app::lua_bind::ModelModule__joint_global_position_impl
              (*ppBVar11,HVar7,(Vector3f *)&local_90,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,(float)local_90);
    lib::L2CValue::L2CValue(aLStack304,local_90._4_4_);
    lib::L2CValue::L2CValue(aLStack288,(float)uStack136);
    lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_140);
    lib::L2CValue::operator_(this_00,aLStack304);
    lib::L2CValue::operator_(this_01,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,0.0);
    lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_THROW_X);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_140);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar14,iVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,0.0);
    lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_THROW_Y);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_140);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar14,iVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_CHANGE_MOTION);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_140);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue(aLStack208);
    this_05 = auStack160;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
LAB_7100024654:
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_140,0xf05b0261b);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,1.0);
      lib::L2CValue::L2CValue(aLStack208,false);
      HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_140);
      fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack208);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar11,HVar7,fVar14,fVar12,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_140);
      lib::L2CValue::L2CValue((L2CValue *)&local_140,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_140);
      app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar4);
      this_05 = &local_140;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)auStack176,0x130e29abcf);
      lib::L2CValue::L2CValue(aLStack192,false);
      FUN_7100022220(this,auStack176,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      this_05 = auStack176;
    }
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_05);
LAB_7100024c84:
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_CHARGE_COUNT);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack208,0x10b8aaa5c5);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar10 = lib::L2CValue::as_integer(aLStack208);
  iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar8,uVar10);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,iVar5);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack224,0x106f411784);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar10 = lib::L2CValue::as_integer(aLStack224);
  iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar8,uVar10);
  lib::L2CValue::L2CValue(aLStack208,iVar5);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)auStack160);
  lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::operator_(aLStack208,(L2CValue *)auStack160);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0);
  uVar8 = lib::L2CValue::operator_((L2CValue *)&local_140,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::operator_((L2CValue *)&local_90,aLStack224);
    lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0.0);
  lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_CHARGE_RATE);
  fVar14 = (float)lib::L2CValue::as_number(aLStack352);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar14,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack368,0x1003d257f5);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar10 = lib::L2CValue::as_integer(aLStack368);
  fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar8,uVar10);
  lib::L2CValue::L2CValue(aLStack352,fVar14);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack384,0x103fdf68ac);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar10 = lib::L2CValue::as_integer(aLStack384);
  fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar8,uVar10);
  lib::L2CValue::L2CValue(aLStack368,fVar14);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::operator_(aLStack368,aLStack352);
  lib::L2CValue::operator_(aLStack384,aLStack336);
  lib::L2CValue::operator_(aLStack352,aLStack400);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0.0);
  lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_LENGTH);
  fVar14 = (float)lib::L2CValue::as_number(aLStack432);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar14,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack448,0x1983a4ef3d);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar10 = lib::L2CValue::as_integer(aLStack448);
  iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar8,uVar10);
  lib::L2CValue::L2CValue(aLStack432,iVar5);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack464,0x19544f5d7c);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar10 = lib::L2CValue::as_integer(aLStack464);
  iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar8,uVar10);
  lib::L2CValue::L2CValue(aLStack448,iVar5);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::operator_(aLStack448,aLStack432);
  lib::L2CValue::operator_(aLStack464,aLStack336);
  lib::L2CValue::operator_(aLStack432,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_EXTEND_FRAME);
  iVar5 = lib::L2CValue::as_integer(aLStack480);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue(aLStack496,0xe);
  lib::L2CValue::operator_(aLStack496,aLStack480);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_BITE_POSITION_FRAME);
  iVar5 = lib::L2CValue::as_integer(aLStack496);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0.0);
  lib::L2CValue::operator_(aLStack512,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_MOTION_RATE);
  fVar14 = (float)lib::L2CValue::as_number(aLStack528);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar14,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue(aLStack528);
  fVar14 = (float)lib::L2CValue::as_number(aLStack512);
  app::lua_bind::MotionModule__set_rate_impl(*ppBVar11,fVar14);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,1.0);
  lib::L2CValue::L2CValue(aLStack528,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_LENGTH_RATE)
  ;
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_140);
  iVar5 = lib::L2CValue::as_integer(aLStack528);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar14,iVar5);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
  lib::L2CValue::L2CValue(aLStack528,true);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  bVar1 = lib::L2CValue::as_bool(aLStack528);
  app::lua_bind::GroundModule__set_shape_flag_impl(*ppBVar11,uVar3,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue(aLStack528,FIGHTER_INSTANCE_WORK_ID_FLAG_LOUPE);
  iVar5 = lib::L2CValue::as_integer(aLStack528);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue(aLStack528);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BITE_LOUPE_STATUS);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_140);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_140,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BITE_LOUPE_STATUS);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_140);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar5);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue(aLStack544,&DAT_71000258d0);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  return;
}

