
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNDrinkItem_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar7 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_710022d6dc:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
LAB_710022d778:
      bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      if ((bVar4 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack80);
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
          goto LAB_710022d808;
        }
      }
      FUN_710022dbd0(this);
      FUN_710022e290(this);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS)
      ;
      iVar6 = lib::L2CValue::as_integer(aLStack80);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS_BOMB);
        iVar6 = lib::L2CValue::as_integer(aLStack80);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        if ((bVar4 & 1U) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS_DRAGOON)
          ;
          iVar6 = lib::L2CValue::as_integer(aLStack128);
          bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            goto LAB_710022d934;
          }
          lib::L2CValue::L2CValue
                    (aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS_GENESIS)
          ;
          iVar6 = lib::L2CValue::as_integer(aLStack160);
          bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
          lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar4 & 1U) == 0) goto LAB_710022da6c;
        }
        else {
LAB_710022d934:
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
        iVar6 = lib::L2CValue::as_integer(aLStack96);
        bVar3 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar6);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar7 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,false);
          lib::L2CValue::L2CValue(aLStack80,true);
          bVar3 = lib::L2CValue::as_bool(aLStack64);
          bVar5 = lib::L2CValue::as_bool(aLStack80);
          app::lua_bind::CatchModule__catch_cut_impl
                    (this->moduleAccessor,(bool)(bVar3 & 1),(bool)(bVar5 & 1));
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack64);
        }
      }
LAB_710022da6c:
      iVar6 = 0;
      goto LAB_710022da74;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) goto LAB_710022d778;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40))
    ;
LAB_710022d808:
    lib::L2CValue::_L2CValue(aLStack80);
    lVar2 = -0x30;
LAB_710022d82c:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lVar2 = -0x40;
      goto LAB_710022d82c;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) goto LAB_710022d6dc;
  }
  iVar6 = 1;
LAB_710022da74:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar6);
  return;
}

