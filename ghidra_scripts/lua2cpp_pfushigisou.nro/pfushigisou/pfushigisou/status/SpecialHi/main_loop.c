
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPfushigisou::status::SpecialHi_main_loop
          (L2CFighterPfushigisou *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCliffCheckKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  FighterModuleAccessor *pFVar8;
  long lVar9;
  Hash40 HVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  uint uVar13;
  undefined8 uVar14;
  float in_register_00005008;
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
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PFUSHIGISOU_STATUS_SPECIAL_HI_FLAG_AIR_LASSO_FAIL);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  ppBVar11 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
  uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
LAB_710000495c:
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar5 & 1) == 0) {
LAB_7100004ac8:
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar5 & 1) != 0) {
        bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
        uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::_L2CValue(aLStack128);
        }
        else {
          lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
          uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar5 & 1) == 0) goto LAB_7100005728;
        }
        bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack240,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
          lib::L2CValue::_L2CValue(aLStack240);
          pLVar6 = aLStack224;
          goto LAB_7100005724;
        }
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_AIR_LASSO_FLAG_CHECK);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
          uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
            uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar11,uVar13);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
            GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::GroundModule__set_cliff_check_impl(*ppBVar11,GVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,
                       _FIGHTER_PFUSHIGISOU_STATUS_SPECIAL_HI_FLAG_AIR_LASSO_FAIL);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lua2cpp::L2CFighterCommon::sub_fighter_general_term_is_cliff_check_pos(this);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
          uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
            lib::L2CValue::L2CValue(aLStack272,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack256);
            iVar3 = 1;
            goto LAB_7100005730;
          }
        }
      }
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
      uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar5 & 1) == 0) {
LAB_7100004edc:
        pLVar6 = aLStack128;
LAB_7100004f40:
        lib::L2CValue::_L2CValue(pLVar6);
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar5 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar5 & 1) == 0) goto LAB_7100004ea4;
          lib::L2CValue::_L2CValue(aLStack128);
LAB_7100004f24:
          lib::L2CValue::L2CValue(aLStack288,false);
          FUN_7100004470(this,aLStack288);
          pLVar6 = aLStack288;
          goto LAB_7100004f40;
        }
LAB_7100004ea4:
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar5 & 1) != 0) goto LAB_7100004edc;
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) goto LAB_7100004f24;
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PFUSHIGISOU_STATUS_SPECIAL_HI_FLAG_SET_ANGLE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack128,fVar12);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
        lib::L2CValue::operator_(pLVar6,aLStack128);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack304,0xd8bda8bdf);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        uVar7 = lib::L2CValue::as_integer(aLStack304);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack160,fVar12);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue(aLStack304);
        lib::L2CValue::L2CValue(aLStack320);
        in_register_00005008 = 0.0;
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
        uVar5 = lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator_(aLStack320,aLStack144);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0xd862595db);
          lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_70);
        }
        else {
          lib::L2CValue::operator_(aLStack144);
          lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0xd814851c2);
          lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_70);
        }
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        uVar5 = lib::L2CValue::operator__(aLStack160,aLStack320);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack368,0x1086bc4a93);
          uVar5 = lib::L2CValue::as_integer(aLStack368);
          uVar7 = lib::L2CValue::as_integer(aLStack304);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack352,fVar12);
          lib::L2CValue::operator_(aLStack320,aLStack160);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
          lib::L2CValue::operator_((L2CValue *)&local_70,aLStack160);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::operator_(aLStack400,aLStack416);
          lib::L2CValue::operator_(aLStack352,aLStack384);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack368);
          in_register_00005008 = 0.0;
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          uVar5 = lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::operator_(aLStack336);
            lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          }
          lib::L2CValue::operator_(aLStack336,aLStack128);
          lib::L2CValue::L2CValue(aLStack352,_FIGHTER_PFUSHIGISOU_STATUS_SPECIAL_HI_FLOAT_ANGLE);
          fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
          iVar3 = lib::L2CValue::as_integer(aLStack352);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack336);
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_70,_FIGHTER_PFUSHIGISOU_STATUS_SPECIAL_HI_FLAG_SET_ANGLE);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      app::FighterSpecializer_PFushigisou::update_vine_angle(pFVar8);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PFUSHIGISOU_STATUS_SPECIAL_HI_SET_MAP_COLL_OFFSET)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
      uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) == 0) goto LAB_7100005728;
      lib::L2CValue::L2CValue(aLStack320,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack336,0x1378036cb5);
      uVar5 = lib::L2CValue::as_integer(aLStack320);
      uVar7 = lib::L2CValue::as_integer(aLStack336);
      lVar9 = app::lua_bind::WorkModule__get_param_int64_impl(*ppBVar11,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack304,lVar9);
      lib::L2CValue::L2CValue(aLStack368,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack384,0x16006b7232);
      uVar5 = lib::L2CValue::as_integer(aLStack368);
      uVar7 = lib::L2CValue::as_integer(aLStack384);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack352,fVar12);
      lib::L2CValue::L2CValue(aLStack416,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack480,0x16776c42a4);
      uVar5 = lib::L2CValue::as_integer(aLStack416);
      uVar7 = lib::L2CValue::as_integer(aLStack480);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack400,fVar12);
      lib::L2CValue::L2CValue(aLStack512,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack528,0x16ee65131e);
      uVar5 = lib::L2CValue::as_integer(aLStack512);
      uVar7 = lib::L2CValue::as_integer(aLStack528);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack496,fVar12);
      HVar10 = lib::L2CValue::as_hash(aLStack304);
      uVar5 = lib::L2CValue::as_number(aLStack352);
      lVar9 = lib::L2CValue::as_number(aLStack400);
      uVar13 = lib::L2CValue::as_number(aLStack496);
      local_70 = uVar5 & 0xffffffff | lVar9 << 0x20;
      uStack104 = (ulong)uVar13;
      uVar14 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                         (*ppBVar11,HVar10,(Vector3f *)&local_70);
      lib::L2CValue::L2CValue(aLStack464,(float)uVar14);
      lib::L2CValue::L2CValue(aLStack448,(float)((ulong)uVar14 >> 0x20));
      lib::L2CValue::L2CValue(aLStack432,in_register_00005008);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack464);
      lib::L2CValue::L2CValue(aLStack128,aLStack448);
      lib::L2CValue::L2CValue(aLStack144,aLStack432);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue(aLStack528);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_STATUS_AIR_LASSO_WORK_FLOAT_MAP_COLL_OFFSET_X);
      fVar12 = (float)lib::L2CValue::as_number(pLVar6);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_STATUS_AIR_LASSO_WORK_FLOAT_MAP_COLL_OFFSET_Y);
      fVar12 = (float)lib::L2CValue::as_number(pLVar6);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_STATUS_AIR_LASSO_WORK_FLOAT_MAP_COLL_OFFSET_Z);
      fVar12 = (float)lib::L2CValue::as_number(pLVar6);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_PFUSHIGISOU_STATUS_SPECIAL_HI_SET_MAP_COLL_OFFSET);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_AIR_LASSO_FLAG_MAP_COLL_OFFSET);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      pLVar6 = aLStack160;
    }
    else {
      bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
      uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack128);
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,false);
        lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
        uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) goto LAB_7100005728;
      }
      bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_STATUS_AIR_LASSO_FLAG_CHECK);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        goto LAB_7100004ac8;
      }
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      pLVar6 = aLStack192;
    }
LAB_7100005724:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
    uVar5 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) goto LAB_710000495c;
  }
LAB_7100005728:
  iVar3 = 0;
LAB_7100005730:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

