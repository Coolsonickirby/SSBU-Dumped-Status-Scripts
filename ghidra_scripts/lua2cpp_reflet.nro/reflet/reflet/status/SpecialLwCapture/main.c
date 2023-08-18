
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::SpecialLwCapture_main(L2CFighterReflet *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x12c2679ed5);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_COMMON_INT_MOTION_KIND_GROUND);
  lVar4 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x164f19ced4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_COMMON_INT_MOTION_KIND_AIR);
  lVar4 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_COMMON_INT_KINETIC_GROUND);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_REFLET_SPECIAL_LW_AIR_CAPTURE);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_COMMON_INT_KINETIC_AIR);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_COMMON_INT_CORRECT_GROUND);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_COMMON_INT_CORRECT_AIR);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,-1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_ATTACK_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,-1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack64,true);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  iVar2 = app::FighterUtil::get_opponent_fighter_num(pBVar5,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator_(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack64,2);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,3);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,4);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,5);
        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,6);
          uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,7);
            uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack128,0x1d19e9ea6b);
              uVar6 = lib::L2CValue::as_integer(aLStack112);
              uVar7 = lib::L2CValue::as_integer(aLStack128);
              iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                                (this->moduleAccessor,uVar6,uVar7);
              lib::L2CValue::L2CValue(aLStack64,iVar2);
              lib::L2CValue::operator_(aLStack80,aLStack64);
            }
            else {
              lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack128,0x1d8956f7fa);
              uVar6 = lib::L2CValue::as_integer(aLStack112);
              uVar7 = lib::L2CValue::as_integer(aLStack128);
              iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                                (this->moduleAccessor,uVar6,uVar7);
              lib::L2CValue::L2CValue(aLStack64,iVar2);
              lib::L2CValue::operator_(aLStack80,aLStack64);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack128,0x1dfe51c76c);
            uVar6 = lib::L2CValue::as_integer(aLStack112);
            uVar7 = lib::L2CValue::as_integer(aLStack128);
            iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
            lib::L2CValue::L2CValue(aLStack64,iVar2);
            lib::L2CValue::operator_(aLStack80,aLStack64);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack128,0x1d675896d6);
          uVar6 = lib::L2CValue::as_integer(aLStack112);
          uVar7 = lib::L2CValue::as_integer(aLStack128);
          iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack64,iVar2);
          lib::L2CValue::operator_(aLStack80,aLStack64);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack128,0x1d105fa640);
        uVar6 = lib::L2CValue::as_integer(aLStack112);
        uVar7 = lib::L2CValue::as_integer(aLStack128);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack64,iVar2);
        lib::L2CValue::operator_(aLStack80,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack128,0x1d8e3b33e3);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack64,iVar2);
      lib::L2CValue::operator_(aLStack80,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0x1df93c0375);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack64,iVar2);
    lib::L2CValue::operator_(aLStack80,aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_SERIAL_HIT_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_FLAG_HEAL_EFFECT);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::AttackModule__set_overlap_hit_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialLwCapture_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

