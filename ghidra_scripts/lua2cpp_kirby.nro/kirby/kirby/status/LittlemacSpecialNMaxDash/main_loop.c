
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::LittlemacSpecialNMaxDash_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_71001ac800:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      this_00 = &this->globalTable;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) goto LAB_71001aca10;
        fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,fVar9);
        lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack144,0x270fca5294);
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        uVar7 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          FUN_71001a8a20(this);
        }
        lib::L2CValue::L2CValue(aLStack80,0x12e418d133);
        HVar8 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::
        FighterMotionModuleImpl__change_motion_inherit_frame_keep_rate_kirby_copy_impl
                  (this->moduleAccessor,HVar8,-1.0,1.0,0.0);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
LAB_71001acadc:
        lib::L2CValue::_L2CValue(aLStack80);
      }
      else {
LAB_71001aca10:
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x1669668132);
            HVar8 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::
            FighterMotionModuleImpl__change_motion_inherit_frame_keep_rate_kirby_copy_impl
                      (this->moduleAccessor,HVar8,-1.0,1.0,0.0);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
            GVar4 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
            goto LAB_71001acadc;
          }
        }
      }
      iVar3 = 0;
      goto LAB_71001acaec;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_LITTLEMAC_SPECIAL_N_MAX_DASH_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack80;
LAB_71001aca00:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar6 = aLStack96;
      goto LAB_71001aca00;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_71001ac800;
  }
  iVar3 = 1;
LAB_71001acaec:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

