
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRichterAxe::status::Hop_main_loop(L2CWeaponRichterAxe *this,L2CValue *return_value)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  GroundCorrectKind GVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *this_00;
  L2CValue *this_01;
  void *pvVar12;
  KineticEnergyNormal *pKVar13;
  WeaponKineticEnergyGravity *pWVar14;
  Hash40 HVar15;
  Weapon *pWVar16;
  L2CAgent *this_02;
  ulong *puVar17;
  BattleObjectModuleAccessor **ppBVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  long lVar24;
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
  undefined auStack288 [32];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  ulong local_80;
  ulong uStack120;
  
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_FLAG_HORIZON);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  ppBVar18 = &this->moduleAccessor;
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar18,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar3 & 1U) == 0) {
    iVar4 = app::lua_bind::GroundModule__get_correct_impl(*ppBVar18);
    lib::L2CValue::L2CValue(aLStack144,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,GROUND_CORRECT_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) goto LAB_7100004abc;
    lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_ALL);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar18,uVar5);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack384,_GROUND_TOUCH_ID_DOWN);
      FUN_7100005370(aLStack368,this,aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::L2CValue(aLStack416,_GROUND_TOUCH_ID_LEFT);
      FUN_7100005370(aLStack400,this,aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::L2CValue(aLStack448,_GROUND_TOUCH_ID_RIGHT);
      FUN_7100005370(aLStack432,this,aLStack448);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue(aLStack480,_GROUND_TOUCH_ID_UP);
      FUN_7100005370(aLStack464,this,aLStack480);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack480);
    }
    lib::L2CValue::L2CValue(aLStack144,-1);
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_INT_GROUND_TOUCH_NUM);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar18,iVar4);
    lib::L2CValue::L2CValue(aLStack160,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    uVar8 = lib::L2CValue::operator__((L2CValue *)&local_80,aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar8 & 1) == 0) {
      FUN_7100005d50(this);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,0x9d3530195);
      lib::L2CValue::L2CValue(aLStack176,0x125de989c7);
      uVar8 = lib::L2CValue::as_integer(aLStack160);
      uVar9 = lib::L2CValue::as_integer(aLStack176);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar18,uVar8,uVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
      lib::L2CValue::L2CValue(aLStack192,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar6 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar4,iVar6);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      app::lua_bind::KineticModule__unable_energy_all_impl(*ppBVar18);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      fVar19 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar18,fVar19);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      fVar19 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar18);
      lib::L2CValue::L2CValue(aLStack160,fVar19);
      uVar5 = app::lua_bind::MotionModule__end_frame_impl(*ppBVar18);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,uVar5);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)auStack288);
      fVar19 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar18);
      lib::L2CValue::L2CValue(aLStack304,fVar19);
      lib::L2CValue::operator_(aLStack208,aLStack304);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,360.0);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_FLOAT_GROUND_TOUCH_NORMAL_X
                );
      lib::L2CValue::operator_((L2CValue *)&local_80,aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      fVar19 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar18,iVar4);
      lib::L2CValue::L2CValue(aLStack496,fVar19);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_FLOAT_GROUND_TOUCH_NORMAL_Y
                );
      lib::L2CValue::operator_((L2CValue *)&local_80,aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack288);
      fVar19 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar18,iVar4);
      lib::L2CValue::L2CValue(aLStack512,fVar19);
      pLVar10 = aLStack512;
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue(aLStack208);
      this_02 = (L2CAgent *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      lib::L2CAgent::math_atan(this_02,pLVar11,pLVar10);
      lib::L2CAgent::math_deg((L2CAgent *)auStack288,pLVar11);
      lib::L2CValue::operator_((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      fVar19 = (float)app::lua_bind::PostureModule__rot_z_impl(*ppBVar18,0);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar19);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack288);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0x168);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack288);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      uVar8 = lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,360.0);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack288);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      uVar8 = lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,360.0);
        lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::operator_(aLStack208,(L2CValue *)auStack288);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      }
      lib::L2CValue::operator_(aLStack208,aLStack176);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,180.0);
      uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)auStack288);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,-180.0);
        uVar8 = lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_80,360.0);
          lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::operator_((L2CValue *)auStack288,aLStack304);
          goto LAB_710000477c;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,360.0);
        lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::operator_((L2CValue *)auStack288,aLStack304);
LAB_710000477c:
        lib::L2CValue::_L2CValue(aLStack304);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0x9d3530195);
      lib::L2CValue::L2CValue(aLStack352,0x11ea632195);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      uVar9 = lib::L2CValue::as_integer(aLStack352);
      fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack304,fVar19);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.5);
      puVar17 = &local_80;
      lib::L2CValue::operator_(aLStack304,(L2CValue *)puVar17);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CAgent::math_abs((L2CAgent *)auStack288,(L2CValue *)puVar17);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_80,aLStack352);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
        uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)auStack288);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::operator_(aLStack352,(L2CValue *)auStack288);
          lib::L2CValue::operator_(aLStack176,aLStack528);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_80);
        }
        else {
          lib::L2CValue::operator_(aLStack352,(L2CValue *)auStack288);
          lib::L2CValue::operator_(aLStack176,aLStack528);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_80);
        }
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack528);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,360.0);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::operator_(aLStack160,aLStack528);
        lib::L2CValue::_L2CValue(aLStack528);
        fVar19 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar18);
        lib::L2CValue::L2CValue(aLStack528,fVar19);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,-1.0);
        uVar8 = lib::L2CValue::operator__(aLStack528,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack528);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_80,1.0);
          lib::L2CValue::operator_((L2CValue *)&local_80,aLStack160);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::operator_(aLStack160,aLStack528);
          lib::L2CValue::_L2CValue(aLStack528);
        }
        uVar5 = app::lua_bind::MotionModule__end_frame_impl(*ppBVar18);
        lib::L2CValue::L2CValue(aLStack528,uVar5);
        lib::L2CValue::operator_(aLStack160,aLStack528);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack528);
        lib::L2CValue::L2CValue(aLStack528,0.0);
        lib::L2CValue::L2CValue(aLStack544,0.0);
        lib::L2CValue::L2CValue(aLStack560,0.0);
        uVar8 = lib::L2CValue::as_number(aLStack528);
        lVar24 = lib::L2CValue::as_number(aLStack544);
        uVar5 = lib::L2CValue::as_number(aLStack560);
        local_80 = uVar8 & 0xffffffff | lVar24 << 0x20;
        uStack120 = (ulong)uVar5;
        app::lua_bind::PostureModule__set_rot_impl(*ppBVar18,(Vector3f *)&local_80,0);
        lib::L2CValue::_L2CValue(aLStack560);
        lib::L2CValue::_L2CValue(aLStack544);
        lib::L2CValue::_L2CValue(aLStack528);
      }
      fVar19 = (float)lib::L2CValue::as_number(aLStack160);
      app::lua_bind::MotionModule__set_frame_impl(*ppBVar18,fVar19,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,GROUND_CORRECT_KIND_GROUND);
      GVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      app::lua_bind::GroundModule__set_correct_impl(*ppBVar18,GVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    lVar24 = -0x80;
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_INT_GROUND_TOUCH_FLAG);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar18,iVar4);
    lib::L2CValue::L2CValue(aLStack160,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    uVar5 = app::lua_bind::GroundModule__ground_touch_flag_impl(*ppBVar18);
    lib::L2CValue::L2CValue(aLStack176,uVar5);
    lib::L2CValue::operator_(aLStack160,aLStack176);
    lib::L2CValue::operator_(aLStack192,aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,_WEAPON_SIMON_AXE_INSTANCE_WORK_ID_FLAG_HOP_BOUND);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar18,iVar4);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
      uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,0x9d3530195);
        lib::L2CValue::L2CValue(aLStack192,0xbeb82c8a3);
        uVar8 = lib::L2CValue::as_integer(aLStack144);
        uVar9 = lib::L2CValue::as_integer(aLStack192);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar18,uVar8,uVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
        lib::L2CValue::L2CValue(aLStack208,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        iVar6 = lib::L2CValue::as_integer(aLStack208);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar4,iVar6);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      uVar5 = app::lua_bind::GroundModule__ground_touch_flag_impl(*ppBVar18);
      lib::L2CValue::L2CValue(aLStack208,uVar5);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      uVar23 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar18,uVar5);
      lib::L2CValue::L2CValue(aLStack240,(float)uVar23);
      lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar23 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack240);
      lib::L2CValue::L2CValue(aLStack144,aLStack224);
      cVar1 = (char)&stack0xfffffffffffffff0;
      lua2cpp::L2CFighterBase::Vector2__create
                (this,(L2CValue)(cVar1 + -0x70),(L2CValue)(cVar1 + -0x80));
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack208);
      uVar23 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar18,-1);
      lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),(float)uVar23);
      lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar23 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(L2CValue *)(auStack288 + 0x10));
      lib::L2CValue::L2CValue(aLStack144,aLStack256);
      lua2cpp::L2CFighterBase::Vector2__create
                (this,(L2CValue)(cVar1 + -0x70),(L2CValue)(cVar1 + -0x80));
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,0x9d3530195);
      lib::L2CValue::L2CValue(aLStack304,0xff61268ac);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack288);
      uVar9 = lib::L2CValue::as_integer(aLStack304);
      fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack144,fVar19);
      lib::L2CValue::operator_(pLVar10,aLStack144);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
      lib::L2CValue::operator_(pLVar10,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,0x9d3530195);
      lib::L2CValue::L2CValue(aLStack304,0xf8115583a);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack288);
      uVar9 = lib::L2CValue::as_integer(aLStack304);
      fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack144,fVar19);
      lib::L2CValue::operator_(pLVar10,aLStack144);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar10,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
      fVar19 = (float)lib::L2CValue::as_number(pLVar10);
      fVar20 = (float)lib::L2CValue::as_number(pLVar11);
      fVar21 = (float)lib::L2CValue::as_number(this_00);
      fVar22 = (float)lib::L2CValue::as_number(this_01);
      uVar23 = app::sv_math::vec2_reflection(fVar19,fVar20,fVar21,fVar22);
      lib::L2CValue::L2CValue(aLStack336,(float)uVar23);
      lib::L2CValue::L2CValue(aLStack320,(float)((ulong)uVar23 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack336);
      lib::L2CValue::L2CValue(aLStack144,aLStack320);
      lua2cpp::L2CFighterBase::Vector2__create
                (this,(L2CValue)(cVar1 + -0x70),(L2CValue)(cVar1 + -0x80));
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)auStack288);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      pvVar12 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar4);
      lib::L2CValue::L2CValue(aLStack144,pvVar12);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,0.0);
      uVar8 = lib::L2CValue::as_number(pLVar10);
      uVar5 = lib::L2CValue::as_number((L2CValue *)auStack288);
      local_80 = uVar8 & 0xffffffff | (ulong)uVar5 << 0x20;
      uStack120 = 0;
      pKVar13 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar13,(Vector2f *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::L2CValue(aLStack304,_WEAPON_SIMON_AXE_INSTANCE_WORK_ID_FLAG_HOP_LANDING);
      iVar4 = lib::L2CValue::as_integer(aLStack304);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar18,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
      uVar8 = lib::L2CValue::operator__((L2CValue *)auStack288,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack288,_WEAPON_SIMON_AXE_KINETIC_ENERGY_ID_GRAVITY);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack288);
        pvVar12 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,pvVar12);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
        fVar19 = (float)lib::L2CValue::as_number(pLVar10);
        pWVar14 = (WeaponKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)&local_80);
        app::lua_bind::WeaponKineticEnergyGravity__set_speed_impl(pWVar14,fVar19);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_80,GROUND_TOUCH_FLAG_DOWN);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
      uVar8 = lib::L2CValue::operator__((L2CValue *)auStack288,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      if ((uVar8 & 1) == 0) {
        HVar15 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar18);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,HVar15);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x7ef3ace15);
        uVar8 = lib::L2CValue::operator__((L2CValue *)auStack288,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0x7ef3ace15);
          HVar15 = lib::L2CValue::as_hash((L2CValue *)&local_80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar18,HVar15,-1.0,1.0,0.0,false,false);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,_WEAPON_SIMON_AXE_MAP_COLLISION_DATA_KIND_LANDING);
          pWVar16 = (Weapon *)lib::L2CValue::as_pointer(pLVar10);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          app::WeaponSpecializer_SimonAxe::set_map_collision_data(pWVar16,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar18,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
          uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)auStack288);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_80,1.0);
            lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)auStack288);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
            lib::L2CValue::operator_(aLStack352,(L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_80,_WEAPON_SIMON_AXE_STATUS_FLY_WORK_FLOAT_MOTION_RATE_VAL
                      );
            fVar19 = (float)lib::L2CValue::as_number(aLStack304);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar18,fVar19,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue(aLStack352);
          }
          lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        }
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_WEAPON_SIMON_AXE_INSTANCE_WORK_ID_FLAG_HOP_BOUND);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar18,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_SIMON_AXE_INSTANCE_WORK_ID_FLAG_HOP_LANDING);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar18,iVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,GROUND_TOUCH_FLAG_DOWN);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
      uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        pvVar12 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar4);
        lib::L2CValue::L2CValue(aLStack144,pvVar12);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_SIMON_AXE_KINETIC_ENERGY_ID_GRAVITY);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        pvVar12 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar4);
        lib::L2CValue::L2CValue(aLStack192,pvVar12);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue(aLStack208,-1.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,0.0);
        uVar8 = lib::L2CValue::as_number(aLStack208);
        uVar5 = lib::L2CValue::as_number((L2CValue *)auStack288);
        local_80 = uVar8 & 0xffffffff | (ulong)uVar5 << 0x20;
        uStack120 = 0;
        pKVar13 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack144);
        app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar13,(Vector2f *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,0x9d3530195);
        lib::L2CValue::L2CValue(aLStack304,0xb1aa8410a);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack288);
        uVar9 = lib::L2CValue::as_integer(aLStack304);
        fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar8,uVar9);
        lib::L2CValue::L2CValue(aLStack208,fVar19);
        lib::L2CValue::operator_(aLStack208);
        fVar19 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
        pWVar14 = (WeaponKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack192);
        app::lua_bind::WeaponKineticEnergyGravity__set_accel_impl(pWVar14,fVar19);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,GROUND_CORRECT_KIND_AIR);
        GVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::GroundModule__set_correct_impl(*ppBVar18,GVar7);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,_WEAPON_SIMON_AXE_INSTANCE_WORK_ID_FLAG_HOP_LANDING);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar18,iVar4);
        goto LAB_71000046b0;
      }
    }
    else {
      lib::L2CValue::operator_(aLStack160,aLStack176);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,GROUND_TOUCH_FLAG_DOWN);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
      uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        pvVar12 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar4);
        lib::L2CValue::L2CValue(aLStack144,pvVar12);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_SIMON_AXE_KINETIC_ENERGY_ID_GRAVITY);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        pvVar12 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar4);
        lib::L2CValue::L2CValue(aLStack192,pvVar12);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,0.0);
        uVar8 = lib::L2CValue::as_number(aLStack208);
        uVar5 = lib::L2CValue::as_number((L2CValue *)auStack288);
        local_80 = uVar8 & 0xffffffff | (ulong)uVar5 << 0x20;
        uStack120 = 0;
        pKVar13 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack144);
        app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar13,(Vector2f *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,0x9d3530195);
        lib::L2CValue::L2CValue(aLStack304,0x153b21461f);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack288);
        uVar9 = lib::L2CValue::as_integer(aLStack304);
        fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar8,uVar9);
        lib::L2CValue::L2CValue(aLStack208,fVar19);
        lib::L2CValue::L2CValue(aLStack352,0.0);
        uVar8 = lib::L2CValue::as_number(aLStack208);
        uVar5 = lib::L2CValue::as_number(aLStack352);
        local_80 = uVar8 & 0xffffffff | (ulong)uVar5 << 0x20;
        uStack120 = 0;
        pKVar13 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack144);
        app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar13,(Vector2f *)&local_80);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
        fVar19 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
        pWVar14 = (WeaponKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack192);
        app::lua_bind::WeaponKineticEnergyGravity__set_speed_impl(pWVar14,fVar19);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
        fVar19 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
        pWVar14 = (WeaponKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack192);
        app::lua_bind::WeaponKineticEnergyGravity__set_accel_impl(pWVar14,fVar19);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,GROUND_CORRECT_KIND_GROUND);
        GVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::GroundModule__set_correct_impl(*ppBVar18,GVar7);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,_WEAPON_SIMON_AXE_INSTANCE_WORK_ID_FLAG_HOP_LANDING);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar18,iVar4);
LAB_71000046b0:
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack144);
      }
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_INT_GROUND_TOUCH_FLAG);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar4,iVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack176);
    lVar24 = -0x90;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar24));
LAB_7100004abc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

