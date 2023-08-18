
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRichter::status::AttackAir_main_loop(L2CFighterRichter *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float *pfVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  Fighter *pFVar13;
  ulong *this_00;
  L2CValue *pLVar14;
  BattleObjectModuleAccessor **ppBVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  undefined8 uVar20;
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  ulong local_1c0;
  undefined8 uStack440;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  undefined auStack368 [32];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  ulong auStack208 [2];
  L2CValue aLStack192 [16];
  ulong local_b0;
  undefined8 uStack168;
  
  lua2cpp::L2CFighterCommon::status_AttackAir_Main(this);
  lib::L2CValue::_L2CValue(aLStack192);
  ppBVar15 = &this->moduleAccessor;
  HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,HVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xd40042152);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_b0,(L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  if ((uVar6 & 1) != 0) goto LAB_710000cdc0;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  if ((uVar6 & 1) == 0) goto LAB_710000cdc0;
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack208,_FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LASSO_FLAG_CHECK
            );
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_b0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
LAB_710000bbd8:
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack208,
               _FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LASSO_FLAG_IS_CHECK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,true);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_b0,(L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    if ((uVar6 & 1) == 0) goto LAB_710000cdc0;
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
    app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar15,uVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_1c0,
               _FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LASSO_FLAG_IS_CHECK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
    this_00 = &local_1c0;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack240,_FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LASSO_FIGHTER_SEARCH_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,false);
    uVar6 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    if ((uVar6 & 1) == 0) goto LAB_710000bbd8;
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack208,
               _FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LASSO_FLAG_IS_CHECK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,false);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_b0,(L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
      HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,HVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xf4594b21c);
      uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,(L2CValue *)&local_1c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      if ((uVar6 & 1) == 0) {
        HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,HVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xc3495ada5);
        uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,(L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_F)
          ;
          uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
          app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar15,uVar4);
          goto LAB_710000bfb4;
        }
        HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,HVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xfdbf74a7b);
        uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,(L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1c0,_FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_F_LW);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
          app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar15,uVar4);
          goto LAB_710000bfb4;
        }
        HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,HVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xfcaf6254b);
        uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,(L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1c0,_FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_B_HI);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
          app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar15,uVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1c0,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES_NEAR);
          lib::L2CValue::operator_((L2CValue *)&local_b0,(L2CValue *)&local_1c0);
          goto LAB_710000bfb4;
        }
        HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,HVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xc33f869bc);
        uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,(L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_B)
          ;
          uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
          app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar15,uVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1c0,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES_NEAR);
          lib::L2CValue::operator_((L2CValue *)&local_b0,(L2CValue *)&local_1c0);
          goto LAB_710000bfb4;
        }
        HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,HVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xf5495dd2c);
        uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,(L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1c0,_FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_B_LW);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
          app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar15,uVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1c0,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES_NEAR);
          lib::L2CValue::operator_((L2CValue *)&local_b0,(L2CValue *)&local_1c0);
          goto LAB_710000bfb4;
        }
        HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,HVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xdde67d935);
        uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,(L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1c0,_FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_HI);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
          app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar15,uVar4);
          goto LAB_710000bfb4;
        }
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_1c0,_FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_F_HI);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
        app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar15,uVar4);
LAB_710000bfb4:
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
      }
      lib::L2CValue::L2CValue(aLStack256,(L2CValue *)&local_b0);
      lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_1c0,
               _FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LASSO_FLAG_IS_CHECK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,false);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_b0,_FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_CLIFF_RAY_CHECK
              );
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    if ((bVar2 & 1U) != 0) {
      pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar15);
      lib::L2CValue::L2CValue(aLStack304,*pfVar8);
      lib::L2CValue::L2CValue(aLStack288,pfVar8[1]);
      lib::L2CValue::L2CValue(aLStack272,pfVar8[2]);
      FUN_71000030b0(aLStack224,this,aLStack304);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack368 + 0x10),0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack368 + 0x10));
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::L2CValue((L2CValue *)auStack368,0.0);
      uVar4 = 0;
      do {
        if ((uVar4 & 0x7fffffff) < 5) {
          switch(uVar4 & 0x7fffffff) {
          case 0:
            lib::L2CValue::L2CValue(aLStack400,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack416,0x15d9d61c78);
            uVar6 = lib::L2CValue::as_integer(aLStack400);
            uVar9 = lib::L2CValue::as_integer(aLStack416);
            fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar9);
            lib::L2CValue::L2CValue(aLStack384,fVar16);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,10.0);
            lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_b0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue(aLStack416);
            lib::L2CValue::_L2CValue(aLStack400);
            lib::L2CValue::L2CValue((L2CValue *)&local_b0,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack384,0x14a62855a1);
            uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
            uVar9 = lib::L2CValue::as_integer(aLStack384);
            fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,fVar16);
            lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_1c0);
            break;
          case 1:
            lib::L2CValue::L2CValue(aLStack400,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack416,0x1747ca7483);
            uVar6 = lib::L2CValue::as_integer(aLStack400);
            uVar9 = lib::L2CValue::as_integer(aLStack416);
            fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar9);
            lib::L2CValue::L2CValue(aLStack384,fVar16);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,10.0);
            lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_b0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue(aLStack416);
            lib::L2CValue::_L2CValue(aLStack400);
            lib::L2CValue::L2CValue((L2CValue *)&local_b0,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack384,0x1618308c1f);
            uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
            uVar9 = lib::L2CValue::as_integer(aLStack384);
            fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,fVar16);
            lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_1c0);
            break;
          case 2:
            lib::L2CValue::L2CValue(aLStack400,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack416,0x1730cd4415);
            uVar6 = lib::L2CValue::as_integer(aLStack400);
            uVar9 = lib::L2CValue::as_integer(aLStack416);
            fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar9);
            lib::L2CValue::L2CValue(aLStack384,fVar16);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,10.0);
            lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_b0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue(aLStack416);
            lib::L2CValue::_L2CValue(aLStack400);
            lib::L2CValue::L2CValue((L2CValue *)&local_b0,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack384,0x166f37bc89);
            uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
            uVar9 = lib::L2CValue::as_integer(aLStack384);
            fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,fVar16);
            lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_1c0);
            break;
          case 3:
            lib::L2CValue::L2CValue(aLStack400,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack416,0x17aea9d1b6);
            uVar6 = lib::L2CValue::as_integer(aLStack400);
            uVar9 = lib::L2CValue::as_integer(aLStack416);
            fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar9);
            lib::L2CValue::L2CValue(aLStack384,fVar16);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,10.0);
            lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_b0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue(aLStack416);
            lib::L2CValue::_L2CValue(aLStack400);
            lib::L2CValue::L2CValue((L2CValue *)&local_b0,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack384,0x16f153292a);
            uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
            uVar9 = lib::L2CValue::as_integer(aLStack384);
            fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,fVar16);
            lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_1c0);
            break;
          case 4:
            lib::L2CValue::L2CValue(aLStack400,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack416,0x17d9aee120);
            uVar6 = lib::L2CValue::as_integer(aLStack400);
            uVar9 = lib::L2CValue::as_integer(aLStack416);
            fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar9);
            lib::L2CValue::L2CValue(aLStack384,fVar16);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,10.0);
            lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_b0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue(aLStack416);
            lib::L2CValue::_L2CValue(aLStack400);
            lib::L2CValue::L2CValue((L2CValue *)&local_b0,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack384,0x16865419bc);
            uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
            uVar9 = lib::L2CValue::as_integer(aLStack384);
            fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,fVar16);
            lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_1c0);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
        uVar6 = lib::L2CValue::operator_((L2CValue *)&local_1c0,aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        if ((uVar6 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x18cdc1683);
          lib::L2CValue::operator_(pLVar7,aLStack240);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x1fbdb2615);
          lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
          lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_1c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
          fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
          lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar16);
          lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
          uVar6 = lib::L2CValue::operator_((L2CValue *)&local_b0,(L2CValue *)&local_1c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,180.0);
            lib::L2CValue::operator_((L2CValue *)&local_1c0,(L2CValue *)auStack368);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_b0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
          }
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x18cdc1683);
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x1fbdb2615);
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x18cdc1683);
          pLVar14 = (L2CValue *)0x1fbdb2615;
          pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x1fbdb2615);
          lib::L2CAgent::math_rad((L2CAgent *)auStack368,pLVar14);
          fVar16 = (float)lib::L2CValue::as_number(pLVar11);
          fVar17 = (float)lib::L2CValue::as_number(pLVar12);
          fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
          uVar20 = app::sv_math::vec2_rot(fVar16,fVar17,fVar18);
          lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(float)uVar20);
          lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar20 >> 0x20));
          lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_1c0);
          lib::L2CValue::operator_(pLVar10,aLStack432);
          lib::L2CValue::_L2CValue(aLStack432);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
          pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x18cdc1683);
          pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack400,true);
          pFVar13 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
          uVar6 = lib::L2CValue::as_number(pLVar10);
          uVar19 = lib::L2CValue::as_number(pLVar11);
          local_1c0 = uVar6 & 0xffffffff | (ulong)uVar19 << 0x20;
          uStack440 = 0;
          uVar6 = lib::L2CValue::as_number(pLVar12);
          uVar19 = lib::L2CValue::as_number(pLVar14);
          local_b0 = uVar6 & 0xffffffff | (ulong)uVar19 << 0x20;
          uStack168 = 0;
          bVar1 = lib::L2CValue::as_bool(aLStack400);
          bVar1 = app::FighterSpecializer_Simon::ray_check_floor_only
                            (pFVar13,(Vector2f *)&local_1c0,(Vector2f *)&local_b0,(bool)(bVar1 & 1))
          ;
          lib::L2CValue::L2CValue(aLStack384,(bool)(bVar1 & 1));
          lib::L2CValue::_L2CValue(aLStack400);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack384);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,true);
            lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue(aLStack384);
            break;
          }
          lib::L2CValue::_L2CValue(aLStack384);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 6);
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LASSO_DAMAGE)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,false);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_b0,(L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_1c0,false);
      uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,(L2CValue *)&local_1c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
      if ((uVar6 & 1) != 0) {
        HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,HVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xdde67d935);
        uVar6 = lib::L2CValue::operator__((L2CValue *)&local_b0,(L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        if ((uVar6 & 1) != 0) {
          bVar1 = app::lua_bind::GroundModule__is_status_cliff_impl(*ppBVar15);
          lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_b0);
          if ((bVar2 & 1U) != 0) {
            bVar1 = app::lua_bind::GroundModule__can_entry_cliff_impl(*ppBVar15);
            lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack320,FIGHTER_INSTANCE_WORK_ID_INT_CLIFF_NO_CATCH_FRAME);
              iVar3 = lib::L2CValue::as_integer(aLStack320);
              iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar3);
              lib::L2CValue::L2CValue(aLStack240,iVar3);
              lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0);
              uVar6 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue(aLStack240);
              lib::L2CValue::_L2CValue(aLStack320);
              lib::L2CValue::_L2CValue(aLStack224);
              lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
              if ((uVar6 & 1) != 0) {
                fVar16 = (float)app::lua_bind::GroundModule__hang_cliff_dir_impl(*ppBVar15);
                lib::L2CValue::L2CValue(aLStack224,fVar16);
                fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
                lib::L2CValue::L2CValue(aLStack240,fVar16);
                lib::L2CValue::operator_(aLStack224,aLStack240);
                lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
                uVar6 = lib::L2CValue::operator_((L2CValue *)&local_1c0,(L2CValue *)&local_b0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
                lib::L2CValue::_L2CValue(aLStack240);
                lib::L2CValue::_L2CValue(aLStack224);
                if ((uVar6 & 1) != 0) {
                  lib::L2CValue::L2CValue
                            ((L2CValue *)&local_1c0,
                             _FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HI_BACK_CLIFF);
                  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
                  app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                }
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_1c0,_FIGHTER_SIMON_GENERATE_ARTICLE_WHIPWIRE);
                iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
                app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar15,iVar3,0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_1c0,_FIGHTER_SIMON_GENERATE_ARTICLE_WHIPWIRE);
                iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
                app::lua_bind::ArticleModule__generate_article_impl(*ppBVar15,iVar3,false,-1);
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                lib::L2CValue::L2CValue(aLStack464,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
                lib::L2CValue::L2CValue(aLStack480,false);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
                lib::L2CValue::_L2CValue(aLStack480);
                lib::L2CValue::_L2CValue(aLStack464);
                lib::L2CValue::L2CValue((L2CValue *)return_value,1);
                goto LAB_710000cdac;
              }
              goto LAB_710000ccc8;
            }
            lib::L2CValue::_L2CValue(aLStack224);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        }
LAB_710000ccc8:
        lua2cpp::L2CFighterCommon::sub_fighter_general_term_is_cliff_check_pos(this);
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,true);
        uVar6 = lib::L2CValue::operator__((L2CValue *)&local_b0,(L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_FIGHTER_SIMON_GENERATE_ARTICLE_WHIPWIRE);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
          app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar15,iVar3,0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_FIGHTER_SIMON_GENERATE_ARTICLE_WHIPWIRE);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
          app::lua_bind::ArticleModule__generate_article_impl(*ppBVar15,iVar3,false,-1);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
          lib::L2CValue::L2CValue(aLStack496,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
          lib::L2CValue::L2CValue(aLStack512,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
          lib::L2CValue::_L2CValue(aLStack512);
          lib::L2CValue::_L2CValue(aLStack496);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_710000cdac:
          lib::L2CValue::_L2CValue((L2CValue *)auStack208);
          return;
        }
      }
    }
    this_00 = auStack208;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
LAB_710000cdc0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

