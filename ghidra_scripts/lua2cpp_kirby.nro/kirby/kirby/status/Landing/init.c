
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKirby::status::Landing_init(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  Hash40 HVar7;
  long lVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) goto LAB_71000268b4;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack192,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_LINK);
  uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_TOONLINK);
    uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_71000267dc;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_YOUNGLINK);
    uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_71000267dc;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_SHEIK);
    uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_PICKEL);
      uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        FUN_7100223070(aLStack112,this);
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xdc81fdc09);
          lib::L2CValue::L2CValue(aLStack112,-1.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,true);
          lib::L2CValue::L2CValue(aLStack176,true);
          HVar7 = lib::L2CValue::as_hash(aLStack96);
          fVar11 = (float)lib::L2CValue::as_number(aLStack112);
          fVar12 = (float)lib::L2CValue::as_number(aLStack128);
          fVar13 = (float)lib::L2CValue::as_number(aLStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          bVar3 = lib::L2CValue::as_bool(aLStack176);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (this->moduleAccessor,HVar7,fVar11,fVar12,fVar13,(bool)(bVar1 & 1),
                     (bool)(bVar3 & 1));
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        else {
          lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100026dd0;
      }
    }
    else {
      this_00 = &this->globalTable;
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING);
      uVar6 = lib::L2CValue::operator__(pLVar9,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING_DAMAGE_LIGHT);
        uVar6 = lib::L2CValue::operator__(pLVar9,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) goto LAB_7100026990;
        lib::L2CValue::L2CValue(aLStack176,0);
      }
      else {
LAB_7100026990:
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_SHEIK_SPECIAL_N_SHOOT);
        uVar6 = lib::L2CValue::operator__(pLVar9,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_SPECIAL_N_LANDING_DISGUISE);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_SPECIAL_N_LANDING_DISGUISE);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
            lib::L2CValue::L2CValue(aLStack128,0xd07d69a9b);
            uVar6 = lib::L2CValue::as_integer(aLStack96);
            uVar10 = lib::L2CValue::as_integer(aLStack128);
            fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (this->moduleAccessor,uVar6,uVar10);
            lib::L2CValue::L2CValue(aLStack112,fVar11);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack128,1.0);
            lib::L2CValue::L2CValue(aLStack96,0);
            uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack144,0xdc81fdc09);
              HVar7 = lib::L2CValue::as_hash(aLStack144);
              uVar5 = app::lua_bind::FighterMotionModuleImpl__end_frame_from_hash_kirby_copy_impl
                                (this->moduleAccessor,HVar7);
              lib::L2CValue::L2CValue(aLStack96,uVar5);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::operator_(aLStack96,aLStack112);
              lib::L2CValue::operator_(aLStack128,aLStack144);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack96);
            }
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_LANDING_CANCEL)
            ;
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0xdc81fdc09);
            lib::L2CValue::L2CValue(aLStack144,0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar7 = lib::L2CValue::as_hash(aLStack96);
            fVar11 = (float)lib::L2CValue::as_number(aLStack144);
            fVar12 = (float)lib::L2CValue::as_number(aLStack128);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                      (this->moduleAccessor,HVar7,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack176,1);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            goto LAB_7100026dac;
          }
        }
        lib::L2CValue::L2CValue(aLStack176,0);
      }
LAB_7100026dac:
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100026dd0:
        lib::L2CValue::_L2CValue(aLStack192);
        return;
      }
    }
  }
  else {
LAB_71000267dc:
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,HVar7);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_INSTANCE_WORK_ID_INT_LANDING_PREV_MOTION_KIND);
    lVar8 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar8,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    fVar11 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_LANDING_PREV_MOTION_FRAME);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack192);
LAB_71000268b4:
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

