
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialNRollAir_init(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  BattleObjectModuleAccessor *pBVar5;
  Hash40 HVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_71001bcea0();
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_MAX_FLAG);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0xcd16a7bf2);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar8)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,HVar6);
      lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x127b3ee7af);
        uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x1244d4ffef);
          uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0xf69613122);
            uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x18b2a96b01);
              uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar7 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack80,0x188d437341);
                uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                if ((uVar7 & 1) == 0) goto LAB_710009a1a4;
              }
            }
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack112,0x14364f7dba);
      lib::L2CValue::L2CValue(aLStack128,true);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      iVar3 = app::lua_bind::SoundModule__play_status_se_impl
                        (this->moduleAccessor,HVar6,(bool)(bVar1 & 1),false,false);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
    }
    else {
      HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,HVar6);
      lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x127b3ee7af);
        uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x1244d4ffef);
          uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0xf69613122);
            uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x18b2a96b01);
              uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar7 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack80,0x188d437341);
                uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                if ((uVar7 & 1) == 0) goto LAB_710009a1a4;
              }
            }
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack112,0x1441484d2c);
      lib::L2CValue::L2CValue(aLStack128,true);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      iVar3 = app::lua_bind::SoundModule__play_status_se_impl
                        (this->moduleAccessor,HVar6,(bool)(bVar1 & 1),false,false);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
    }
  }
  else {
    HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,HVar6);
    lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x127b3ee7af);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x16747cdb62);
        uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0xf69613122);
          uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x18b2a96b01);
            uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x1ced5f3179);
              uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar7 & 1) == 0) goto LAB_710009a1a4;
            }
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack112,0x14d1f750bd);
    lib::L2CValue::L2CValue(aLStack128,true);
    HVar6 = lib::L2CValue::as_hash(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    iVar3 = app::lua_bind::SoundModule__play_status_se_impl
                      (this->moduleAccessor,HVar6,(bool)(bVar1 & 1),false,false);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710009a1a4:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

