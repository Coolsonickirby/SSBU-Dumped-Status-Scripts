
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKirby::status::Landing_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lua2cpp::L2CFighterCommon::status_Landing(this);
    return;
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_PICKEL);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    FUN_7100223070(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,Landing_main_loop);
      lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lua2cpp::L2CFighterCommon::status_Landing(this);
    }
    pLVar5 = aLStack112;
    goto LAB_71000264cc;
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lua2cpp::L2CFighterCommon::status_LandingSub(this);
  lua2cpp::L2CFighterCommon::status_LandingStiffness(this);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_LINK);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
LAB_71000260f4:
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_TOONLINK);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_TOONLINK_SPECIAL_N);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) goto LAB_71000261b4;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_YOUNGLINK);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_YOUNGLINK_SPECIAL_N);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) goto LAB_71000261b4;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_SONIC);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SONIC_INSTANCE_WORK_FLAG_SPECIAL_N_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        pLVar5 = aLStack80;
        goto LAB_7100026494;
      }
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_LINK_SPECIAL_N);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_71000260f4;
LAB_71000261b4:
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_LINK_INSTANCE_WORK_ID_INT_LANDING_PREV_MOTION_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar6);
      lib::L2CValue::L2CValue(aLStack80,0x11c0a0c60e);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_LANDING_PREV_MOTION_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,fVar8);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack144,0x13d04245bd);
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        uVar7 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::operator_(aLStack128,aLStack112);
        lib::L2CValue::L2CValue(aLStack80,1);
        lib::L2CValue::operator_(aLStack160,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack80,0xd07d69a9b);
        lib::L2CValue::L2CValue(aLStack176,0);
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        uVar7 = lib::L2CValue::as_integer(aLStack176);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack160,fVar8);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack176,0);
        uVar4 = lib::L2CValue::operator_(aLStack160,aLStack144);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::operator_(aLStack176,aLStack160);
        }
        else {
          lib::L2CValue::operator_(aLStack176,aLStack144);
        }
        lib::L2CValue::L2CValue(aLStack80,0.0);
        lib::L2CValue::operator_(aLStack176,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_LANDING_WORK_FLOAT_STIFFNESS_FRAME);
        fVar8 = (float)lib::L2CValue::as_number(aLStack192);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        pLVar5 = aLStack112;
LAB_7100026494:
        lib::L2CValue::_L2CValue(pLVar5);
      }
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lua2cpp::L2CFighterCommon::sub_landing_start_check_damage_face(this);
  lib::L2CValue::L2CValue(aLStack80,Landing_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  pLVar5 = aLStack80;
LAB_71000264cc:
  lib::L2CValue::_L2CValue(pLVar5);
  return;
}

