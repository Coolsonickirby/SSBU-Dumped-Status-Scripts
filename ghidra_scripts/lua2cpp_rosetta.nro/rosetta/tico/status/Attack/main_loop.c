
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::Attack_main_loop(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  BattleObjectModuleAccessor *pBVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  Hash40 HVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
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
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  ppBVar11 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::ControlModule__check_button_on_trriger_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_ATTACK);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::ControlModule__check_button_on_release_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) goto LAB_710003f2dc;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_WORK_INT_100_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar11,iVar3);
LAB_710003f2d4:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
LAB_710003f22c:
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_WORK_INT_100_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar11,iVar3);
      goto LAB_710003f2d4;
    }
    lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::ControlModule__check_button_release_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) goto LAB_710003f22c;
  }
LAB_710003f2dc:
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_TRANSITION_SELF);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar8);
    lib::L2CValue::operator_(aLStack192,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      HVar10 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack112,HVar10);
      lib::L2CValue::operator_(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x47f9000cf);
      lib::L2CValue::operator_(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x99c52257e);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x9055b74c4);
        uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0x9725c4452);
          uVar5 = lib::L2CValue::operator__(aLStack192,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x1003559f46);
            uVar5 = lib::L2CValue::operator__(aLStack192,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack112,0xa5ae1e07e);
              uVar5 = lib::L2CValue::operator__(aLStack192,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar5 & 1) == 0) goto LAB_710003f860;
            }
            lib::L2CValue::L2CValue(aLStack112,0x47f9000cf);
            lib::L2CValue::L2CValue
                      (aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND);
            lVar8 = lib::L2CValue::as_integer(aLStack112);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar11,lVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack352,_WEAPON_ROSETTA_TICO_STATUS_KIND_ATTACK_100);
            lib::L2CValue::L2CValue(aLStack368,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
            lib::L2CValue::_L2CValue(aLStack368);
            lib::L2CValue::_L2CValue(aLStack352);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_710003ff7c;
          }
          lib::L2CValue::L2CValue(aLStack112,0x9725c4452);
          lib::L2CValue::operator_(aLStack176,aLStack112);
          goto LAB_710003f858;
        }
        lib::L2CValue::L2CValue(aLStack112,0x9725c4452);
        uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0x99c52257e);
          uVar5 = lib::L2CValue::operator__(aLStack192,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,0x99c52257e);
            lib::L2CValue::operator_(aLStack176,aLStack112);
            goto LAB_710003f858;
          }
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x9055b74c4);
        uVar5 = lib::L2CValue::operator__(aLStack192,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) goto LAB_710003f860;
        lib::L2CValue::L2CValue(aLStack112,0x9055b74c4);
        lib::L2CValue::operator_(aLStack176,aLStack112);
LAB_710003f858:
        lib::L2CValue::_L2CValue(aLStack112);
      }
LAB_710003f860:
      lib::L2CValue::L2CValue(aLStack112,0x47f9000cf);
      uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar10 = lib::L2CValue::as_hash(aLStack176);
        fVar12 = (float)lib::L2CValue::as_number(aLStack112);
        fVar13 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar11,HVar10,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack384,aLStack176);
        FUN_710003ead0(this,aLStack384);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack224,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x47f9000cf);
        lib::L2CValue::L2CValue
                  (aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND);
        lVar8 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar11,lVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_COMMON_WORK_INT_PARENT_MOTION);
        lVar8 = lib::L2CValue::as_integer(aLStack192);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar11,lVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710003ff7c;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_WORK_FLAG_ENABLE_100);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_WORK_INT_100_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      lib::L2CValue::L2CValue(aLStack256,0x150ad6505a);
      lib::L2CValue::L2CValue(aLStack272,0);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      pvVar7 = (void *)app::WeaponSpecializer_RosettaTico::owner_module_accessor(pBVar6);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack288,(L2CValue *)&FIGHTER_PAD_CMD_CAT2_FLAG_AIR_LASSO);
      }
      else {
        lib::L2CValue::L2CValue(aLStack288,pvVar7);
      }
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar9 = lib::L2CValue::as_integer(aLStack272);
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack288);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(pBVar6,uVar5,uVar9);
      lib::L2CValue::L2CValue(aLStack240,iVar3);
      uVar5 = lib::L2CValue::operator__(aLStack240,aLStack144);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack304,_WEAPON_ROSETTA_TICO_STATUS_KIND_ATTACK_100);
        lib::L2CValue::L2CValue(aLStack320,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710003ff7c;
      }
    }
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_WORK_FLAG_CONNECT_COMBO);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      HVar10 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack112,HVar10);
      lib::L2CValue::operator_(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x99c52257e);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x9055b74c4);
        uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x99c52257e);
          lib::L2CValue::operator_(aLStack176,aLStack112);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x9725c4452);
          lib::L2CValue::operator_(aLStack176,aLStack112);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x9055b74c4);
        lib::L2CValue::operator_(aLStack176,aLStack112);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar10 = lib::L2CValue::as_hash(aLStack176);
      fVar12 = (float)lib::L2CValue::as_number(aLStack112);
      fVar13 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar11,HVar10,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack336,aLStack176);
      FUN_710003ead0(this,aLStack336);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_WORK_FLAG_ENABLE_COMBO);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_WORK_FLAG_ENABLE_100);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_WORK_FLAG_CONNECT_COMBO)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710003ff7c;
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    FUN_710002c5a0(this);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710003ff7c;
  }
  lib::L2CValue::L2CValue(aLStack400,true);
  FUN_710003b0e0(aLStack112,this,aLStack400);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack400);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710003ff7c;
  }
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator__(aLStack224,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710003f948;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710003f948;
    }
  }
  else {
LAB_710003f948:
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_FREE);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack480,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::L2CValue(aLStack496,_WEAPON_KINETIC_TYPE_ROSETTA_TICO_MOTION_TRANS);
      lib::L2CValue::L2CValue(aLStack512,true);
      FUN_710003bc90(this,aLStack496,aLStack512);
      lib::L2CValue::_L2CValue(aLStack512);
      pLVar4 = aLStack496;
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack432,SITUATION_KIND_AIR);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x50);
        pLVar4 = aLStack432;
      }
      else {
        lib::L2CValue::L2CValue(aLStack416,_SITUATION_KIND_GROUND);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x60);
        pLVar4 = aLStack416;
      }
      lib::L2CValue::_L2CValue(pLVar4);
      lib::L2CValue::L2CValue(aLStack448,_WEAPON_KINETIC_TYPE_ROSETTA_TICO_MOTION_TRANS_FREE_ATTACK)
      ;
      lib::L2CValue::L2CValue(aLStack464,true);
      FUN_710003bc90(this,aLStack448,aLStack464);
      lib::L2CValue::_L2CValue(aLStack464);
      pLVar4 = aLStack448;
    }
    lib::L2CValue::_L2CValue(pLVar4);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710003ff7c:
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

