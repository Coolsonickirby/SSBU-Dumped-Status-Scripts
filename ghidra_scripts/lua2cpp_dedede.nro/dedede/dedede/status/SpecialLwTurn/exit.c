
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::SpecialLwAttack_exit(L2CFighterDedede *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_WAIT);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_WALK);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_TURN);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_JUMP_SQUAT);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_JUMP);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_PASS);
            uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar5 & 1) == 0) {
              pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_FALL);
              uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar5 & 1) == 0) {
                pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
                lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_LANDING);
                uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                if ((uVar5 & 1) == 0) {
                  lib::L2CValue::L2CValue
                            (aLStack112,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_START);
                  iVar2 = lib::L2CValue::as_integer(aLStack112);
                  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
                  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
                  lib::L2CValue::L2CValue(aLStack80,true);
                  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
                  lib::L2CValue::_L2CValue(aLStack80);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::_L2CValue(aLStack112);
                  if ((uVar5 & 1) != 0) {
                    FUN_710000b860(this);
                  }
                  lib::L2CValue::L2CValue(aLStack80,0x110371c42a);
                  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_CONTROLLER_RUMBLE_ID_SPECIAL_LW)
                  ;
                  HVar6 = lib::L2CValue::as_hash(aLStack80);
                  uVar3 = lib::L2CValue::as_integer(aLStack96);
                  app::lua_bind::ControlModule__stop_rumble_kind_impl
                            (this->moduleAccessor,HVar6,uVar3);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::_L2CValue(aLStack80);
                  lib::L2CValue::L2CValue(aLStack80,0x119a789590);
                  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_CONTROLLER_RUMBLE_ID_SPECIAL_LW)
                  ;
                  HVar6 = lib::L2CValue::as_hash(aLStack80);
                  uVar3 = lib::L2CValue::as_integer(aLStack96);
                  app::lua_bind::ControlModule__stop_rumble_kind_impl
                            (this->moduleAccessor,HVar6,uVar3);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::_L2CValue(aLStack80);
                }
              }
            }
          }
        }
      }
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_WAIT);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_WALK);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_TURN);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_JUMP_SQUAT);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_JUMP);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_PASS);
            uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar5 & 1) == 0) {
              pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_FALL);
              uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar5 & 1) == 0) {
                pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
                lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_LANDING);
                uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                if ((uVar5 & 1) == 0) {
                  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
                  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_ATTACK);
                  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
                  lib::L2CValue::_L2CValue(aLStack80);
                  if ((uVar5 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_GENERATE_ARTICLE_JETHAMMER);
                    iVar2 = lib::L2CValue::as_integer(aLStack80);
                    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
                    lib::L2CValue::_L2CValue(aLStack80);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

