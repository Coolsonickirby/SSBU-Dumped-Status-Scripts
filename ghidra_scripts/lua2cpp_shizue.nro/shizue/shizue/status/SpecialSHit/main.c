
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialSHit_main(L2CFighterShizue *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ItemCommonParamInt IVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  void *pvVar10;
  ulong uVar11;
  BattleObjectModuleAccessor *pBVar12;
  Item *pIVar13;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  L2CValue *this_05;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  float fVar16;
  long lVar17;
  undefined8 uVar18;
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
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
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  lua_State *plStack136;
  
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack576,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack576);
  lib::L2CValue::_L2CValue(aLStack576);
  if ((uVar8 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack576,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack576);
    lib::L2CValue::_L2CValue(aLStack576);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack576,0x1102fe80cd);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar9 = lib::L2CValue::as_hash(aLStack576);
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      fVar16 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar9,fVar15,fVar16,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack576);
      lib::L2CValue::L2CValue(aLStack576,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack576);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      goto LAB_7100024514;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack576,0xde29323e4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar9 = lib::L2CValue::as_hash(aLStack576);
    fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    fVar16 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar9,fVar15,fVar16,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack576);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
LAB_7100024514:
    lib::L2CValue::_L2CValue(aLStack576);
  }
  lib::L2CValue::L2CValue
            (aLStack576,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_TARGET_OBJECT_CATEGORY);
  iVar3 = lib::L2CValue::as_integer(aLStack576);
  ppBVar14 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue(aLStack320,iVar3);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack576,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_TARGET_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack576);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue(aLStack336,iVar3);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack384,aLStack320);
  lib::L2CValue::L2CValue(aLStack400,aLStack336);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar8 = lib::L2CValue::operator__(aLStack384,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_BATTLE_OBJECT_CATEGORY_ITEM);
    uVar8 = lib::L2CValue::operator__(aLStack384,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar8 & 1) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack400);
      pvVar10 = (void *)app::lua_bind::ItemManager__find_active_item_from_id_impl
                                  (FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_HANG_FLAG,uVar4);
      if (pvVar10 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack160,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,pvVar10);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_ITEM_COMMON_PARAM_INT_SIZE_KIND);
      IVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      pIVar13 = (Item *)lib::L2CValue::as_pointer(aLStack160);
      iVar3 = app::lua_bind::Item__common_param_int_impl(pIVar13,IVar5);
      lib::L2CValue::L2CValue(aLStack176,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_ITEM_SIZE_KIND_SMALL);
      uVar8 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,_ITEM_SIZE_KIND_LARGE);
        uVar8 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack192,0x153c0845df);
          uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          uVar11 = lib::L2CValue::as_integer(aLStack192);
          fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar8,uVar11);
          lib::L2CValue::L2CValue(aLStack576,fVar15);
          lib::L2CValue::L2CValue(aLStack560,1.0);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack192,0x1510268672);
          uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          uVar11 = lib::L2CValue::as_integer(aLStack192);
          fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar8,uVar11);
          lib::L2CValue::L2CValue(aLStack576,fVar15);
          lib::L2CValue::L2CValue(aLStack560,1.0);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack192,0x153c0845df);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        uVar11 = lib::L2CValue::as_integer(aLStack192);
        fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar8,uVar11);
        lib::L2CValue::L2CValue(aLStack576,fVar15);
        lib::L2CValue::L2CValue(aLStack560,1.0);
      }
      lib::L2CValue::_L2CValue(aLStack192);
      lVar17 = -0x80;
      goto LAB_7100024c78;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_BATTLE_OBJECT_CATEGORY_ENEMY);
    uVar8 = lib::L2CValue::operator__(aLStack384,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack576,0);
      lib::L2CValue::L2CValue(aLStack560,0);
      goto LAB_7100024c8c;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x1510268672);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar11 = lib::L2CValue::as_integer(aLStack160);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar8,uVar11);
    lib::L2CValue::L2CValue(aLStack576,fVar15);
    lib::L2CValue::L2CValue(aLStack560,1.0);
    lib::L2CValue::_L2CValue(aLStack160);
    lVar17 = -0x80;
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack400);
    pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar10 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,pvVar10);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x607cd5541);
    lib::L2CValue::L2CValue(aLStack192,0);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar11 = lib::L2CValue::as_integer(aLStack192);
    pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar12,uVar8,uVar11);
    lib::L2CValue::L2CValue(aLStack176,fVar15);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,100);
    lib::L2CValue::operator_((L2CValue *)&local_90,aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack224,0xfea97fe73);
    lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0x1d2eb73267);
    uVar8 = lib::L2CValue::as_integer(aLStack224);
    uVar11 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar8,uVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar15);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack224,0x1246740149);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    pLVar7 = (L2CValue *)lib::L2CValue::as_integer(aLStack224);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar8,(ulong)pLVar7);
    lib::L2CValue::L2CValue(aLStack208,fVar15);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::operator_(aLStack208,aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0.0);
    lib::L2CAgent::math_max((L2CAgent *)&local_90,(L2CValue *)(auStack256 + 0x10),pLVar7);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::operator_(aLStack224,aLStack208);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CAgent::math_max((L2CAgent *)auStack256,aLStack272,pLVar7);
    lib::L2CValue::L2CValue(aLStack288,1.0);
    lib::L2CAgent::math_min((L2CAgent *)&local_90,aLStack288,pLVar7);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack272,0x152d528a21);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar11 = lib::L2CValue::as_integer(aLStack272);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar8,uVar11);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar15);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
    lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)auStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::operator_((L2CValue *)(auStack256 + 0x10),aLStack304);
    lib::L2CValue::operator_((L2CValue *)auStack256,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack576,aLStack224);
    lib::L2CValue::L2CValue(aLStack560,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lVar17 = -0xb0;
LAB_7100024c78:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar17));
    lib::L2CValue::_L2CValue(aLStack176);
    lVar17 = -0x90;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar17));
LAB_7100024c8c:
  lib::L2CValue::operator_(aLStack352,aLStack576);
  lib::L2CValue::operator_(aLStack368,aLStack560);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue(aLStack576,0.0);
  lib::L2CValue::operator_(aLStack352,aLStack576);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack576,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLOAT_PULL_SPEED);
  fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer(aLStack576);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack192,0xae703c2bf);
  uVar8 = lib::L2CValue::as_integer(aLStack176);
  uVar11 = lib::L2CValue::as_integer(aLStack192);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar8,uVar11);
  lib::L2CValue::L2CValue(aLStack416,fVar15);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack448,_WEAPON_SHIZUE_FISHINGROD_STATUS_KIND_REEL);
  app::WeaponShizueFishingrodLinkEventReel::new_l2c_table();
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0xb72ef0e37);
  lib::L2CValue::operator_(pLVar7,aLStack416);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0xba18e8045);
  lib::L2CValue::operator_(pLVar7,aLStack432);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0xc21b85cd4);
  lib::L2CValue::operator_(pLVar7,aLStack448);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x87e8fbda0);
  lib::L2CValue::L2CValue(aLStack576,false);
  lib::L2CValue::operator_(pLVar7,aLStack576);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_LINK_NO_CONSTRAINT);
  FUN_71000226c0(aLStack576,this,aLStack160,&local_90);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar14);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack576,false);
  uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack576);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack480,false);
    FUN_7100025d80(aLStack464,this,aLStack480);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack480);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
  lib::L2CValue::L2CValue(aLStack576,&DAT_7100025ff0);
  lib::L2CValue::operator_(pLVar7,aLStack576);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack496,0.0);
  lib::L2CValue::L2CValue(aLStack512,0.0);
  lib::L2CValue::L2CValue(aLStack528,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack176,0x54f934137);
  this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_05 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  HVar9 = lib::L2CValue::as_hash(aLStack176);
  uVar8 = lib::L2CValue::as_number(this_03);
  lVar17 = lib::L2CValue::as_number(this_04);
  uVar4 = lib::L2CValue::as_number(this_05);
  local_90 = (void **)(uVar8 & 0xffffffff | lVar17 << 0x20);
  plStack136 = (lua_State *)(ulong)uVar4;
  app::lua_bind::ModelModule__joint_global_position_impl(*ppBVar14,HVar9,(Vector3f *)&local_90,true)
  ;
  lib::L2CValue::L2CValue(aLStack576,(float)local_90);
  lib::L2CValue::L2CValue(aLStack560,local_90._4_4_);
  fVar15 = 0.0;
  lib::L2CValue::L2CValue(aLStack544,plStack136._0_4_);
  lib::L2CValue::operator_(pLVar7,aLStack576);
  lib::L2CValue::operator_(this_01,aLStack560);
  lib::L2CValue::operator_(this_02,aLStack544);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack576,false);
  bVar1 = lib::L2CValue::as_bool(aLStack576);
  app::lua_bind::LinkModule__remove_model_constraint_impl(*ppBVar14,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack576,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGROD);
  lib::L2CValue::L2CValue(aLStack176,0x5e05e32cb);
  iVar3 = lib::L2CValue::as_integer(aLStack576);
  HVar9 = lib::L2CValue::as_hash(aLStack176);
  uVar18 = app::lua_bind::ArticleModule__get_joint_pos_impl(*ppBVar14,iVar3,HVar9,0);
  lib::L2CValue::L2CValue(aLStack624,(float)uVar18);
  lib::L2CValue::L2CValue(aLStack608,(float)((ulong)uVar18 >> 0x20));
  lib::L2CValue::L2CValue(aLStack592,fVar15);
  FUN_7100008290(&local_90,this,aLStack624);
  lib::L2CValue::_L2CValue(aLStack592);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::_L2CValue(aLStack624);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack576);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack576,0.0);
  lib::L2CValue::operator_(pLVar7,aLStack576);
  lib::L2CValue::_L2CValue(aLStack576);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x162d277af);
  lib::L2CValue::L2CValue(aLStack576,0.0);
  lib::L2CValue::operator_(pLVar7,aLStack576);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack640,aLStack176);
  lua2cpp::L2CFighterBase::Vector3__length(this,(L2CValue)0x80);
  lib::L2CValue::L2CValue(aLStack576,0.0);
  lib::L2CValue::operator_(aLStack208,aLStack576);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack576,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLOAT_LINE_LENGTH);
  fVar15 = (float)lib::L2CValue::as_number(aLStack192);
  iVar3 = lib::L2CValue::as_integer(aLStack576);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack640);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack576,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar8 = lib::L2CValue::operator__(aLStack320,aLStack576);
  lib::L2CValue::_L2CValue(aLStack576);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack576,0x18a805f09a);
    lib::L2CValue::operator_(aLStack192,aLStack576);
  }
  else {
    lib::L2CValue::L2CValue(aLStack576,0x1b9a747c2e);
    lib::L2CValue::operator_(aLStack192,aLStack576);
  }
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
  uVar8 = lib::L2CValue::as_integer(aLStack208);
  uVar11 = lib::L2CValue::as_integer(aLStack192);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar14,uVar8,uVar11);
  lib::L2CValue::L2CValue(aLStack576,iVar3);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_HIT_STOP_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack576);
  iVar6 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar3,iVar6);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack224,0x15283722fd);
  uVar8 = lib::L2CValue::as_integer(aLStack208);
  uVar11 = lib::L2CValue::as_integer(aLStack224);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar14,uVar8,uVar11);
  lib::L2CValue::L2CValue(aLStack576,iVar3);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack256 + 0x10),
             _FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_HIT_WAIT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack576);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
  app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar3,iVar6);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack656,aLStack320);
  lib::L2CValue::L2CValue(aLStack672,aLStack336);
  FUN_71000241c0(aLStack576,aLStack656,aLStack672);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack576);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack672);
  lib::L2CValue::_L2CValue(aLStack656);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::CatchModule__set_catch_impl(*ppBVar14,0x50000000);
  }
  lib::L2CValue::L2CValue(aLStack688,&DAT_7100026050);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack688);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  return;
}

