
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialNCharge_main_loop
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  long lVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor *pBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710002d5cc;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710002d5cc:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      FUN_710000d730(this);
    }
  }
  FUN_710002e0a0(aLStack96,this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    return;
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_710002d718;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710002d720;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  else {
LAB_710002d718:
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710002d720:
    FUN_710002e450(this);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_CHARGE_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLAG_RELEASE_BUTTON);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar2 & 1U) == 0) {
    FUN_710002e8d0(aLStack160,this);
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::_L2CValue(aLStack160);
      goto LAB_710002d8e4;
    }
    lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack192,0x10778517a8);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,0x10d8c99760);
          lib::L2CValue::L2CValue(aLStack144,0x103f71ba67);
          FUN_710002b500(aLStack96,this,aLStack128,aLStack144);
          lib::L2CValue::L2CValue
                    (aLStack160,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_G);
          lVar8 = lib::L2CValue::as_integer(aLStack96);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack160,0x14597c1820);
          lib::L2CValue::L2CValue(aLStack176,0x14bec43527);
          FUN_710002b500(aLStack96,this,aLStack160,aLStack176);
          lib::L2CValue::L2CValue
                    (aLStack192,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_A);
          lVar8 = lib::L2CValue::as_integer(aLStack96);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue
                      (aLStack192,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_A);
            iVar3 = lib::L2CValue::as_integer(aLStack192);
            lVar8 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,lVar8);
            lib::L2CValue::L2CValue(aLStack208,0.0);
            lib::L2CValue::L2CValue(aLStack224,1.0);
            lib::L2CValue::L2CValue(aLStack240,false);
            HVar9 = lib::L2CValue::as_hash(aLStack96);
            fVar11 = (float)lib::L2CValue::as_number(aLStack208);
            fVar12 = (float)lib::L2CValue::as_number(aLStack224);
            bVar1 = lib::L2CValue::as_bool(aLStack240);
            app::lua_bind::MotionModule__change_motion_impl
                      (this->moduleAccessor,HVar9,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack192,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_G);
            iVar3 = lib::L2CValue::as_integer(aLStack192);
            lVar8 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,lVar8);
            lib::L2CValue::L2CValue(aLStack208,0.0);
            lib::L2CValue::L2CValue(aLStack224,1.0);
            lib::L2CValue::L2CValue(aLStack240,false);
            HVar9 = lib::L2CValue::as_hash(aLStack96);
            fVar11 = (float)lib::L2CValue::as_number(aLStack208);
            fVar12 = (float)lib::L2CValue::as_number(aLStack224);
            bVar1 = lib::L2CValue::as_bool(aLStack240);
            app::lua_bind::MotionModule__change_motion_impl
                      (this->moduleAccessor,HVar9,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack192);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
          app::FighterUtil::flash_eye_info(pBVar10);
          lib::L2CValue::L2CValue(aLStack192,0x189615e963);
          HVar9 = lib::L2CValue::as_hash(aLStack192);
          iVar3 = app::lua_bind::SoundModule__play_se_impl
                            (this->moduleAccessor,HVar9,true,false,false,false,0);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::L2CValue
                    (aLStack192,
                     _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLAG_SPECIAL_N_CHARGE_MAX);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::L2CValue(aLStack192,1);
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_STEP);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          iVar4 = lib::L2CValue::as_integer(aLStack208);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710002d93c;
    }
  }
  else {
LAB_710002d8e4:
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_N_FIRE);
  lib::L2CValue::L2CValue(aLStack128,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002d93c:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

