
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSimon::status::ItemThrow_main(L2CFighterSimon *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar6);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_ITEM_THROW_WORK_FLOAT_LR);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_ITEM_THROW_WORK_INT_MOTION_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  lVar3 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,lVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lua2cpp::L2CFighterCommon::ItemThrowLightMotionDecisionAir(this);
    }
    else {
      lua2cpp::L2CFighterCommon::ItemThrowLightMotionDecision(this);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_ITEM_THROW_WORK_INT_MOTION_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  lVar3 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,lVar3);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,0x13455c51bc);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x13213094b8);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x1434afb6dd);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x14e7e721de);
        uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x13ce05517b);
          uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x135066a91c);
            uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x1579bbe8d8);
              uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack80,0x128c67b93f);
                uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                if ((uVar4 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack80,0x128b0a7d26);
                  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                  lib::L2CValue::_L2CValue(aLStack80);
                  if ((uVar4 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack80,0x176265cf32);
                    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                    lib::L2CValue::_L2CValue(aLStack80);
                    if ((uVar4 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack80,0x1706090a36);
                      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                      lib::L2CValue::_L2CValue(aLStack80);
                      if ((uVar4 & 1) == 0) {
                        lib::L2CValue::L2CValue(aLStack80,0x183e882164);
                        uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                        lib::L2CValue::_L2CValue(aLStack80);
                        if ((uVar4 & 1) == 0) {
                          lib::L2CValue::L2CValue(aLStack80,0x18edc0b667);
                          uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                          lib::L2CValue::_L2CValue(aLStack80);
                          if ((uVar4 & 1) == 0) {
                            lib::L2CValue::L2CValue(aLStack80,0x16b7b89d4e);
                            uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                            lib::L2CValue::_L2CValue(aLStack80);
                            if ((uVar4 & 1) == 0) {
                              lib::L2CValue::L2CValue(aLStack80,0x16b0d55957);
                              uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                              lib::L2CValue::_L2CValue(aLStack80);
                              if ((uVar4 & 1) == 0) {
                                lib::L2CValue::L2CValue(aLStack80,0x17e93ccff5);
                                uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                                lib::L2CValue::_L2CValue(aLStack80);
                                if ((uVar4 & 1) == 0) {
                                  lib::L2CValue::L2CValue(aLStack80,0x17775f3792);
                                  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                                  lib::L2CValue::_L2CValue(aLStack80);
                                  if ((uVar4 & 1) == 0) {
                                    pLVar5 = (L2CValue *)
                                             lib::L2CValue::operator__
                                                       ((L2CValue *)&this->globalTable,0x16);
                                    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
                                    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
                                    lib::L2CValue::_L2CValue(aLStack80);
                                    if ((uVar4 & 1) == 0) {
                                      lib::L2CValue::L2CValue(aLStack80,0x176265cf32);
                                      lib::L2CValue::L2CValue
                                                (aLStack112,
                                                 _FIGHTER_STATUS_ITEM_THROW_WORK_INT_MOTION_KIND);
                                      lVar3 = lib::L2CValue::as_integer(aLStack80);
                                      iVar1 = lib::L2CValue::as_integer(aLStack112);
                                      app::lua_bind::WorkModule__set_int64_impl
                                                (this->moduleAccessor,lVar3,iVar1);
                                      lib::L2CValue::_L2CValue(aLStack112);
                                      lib::L2CValue::_L2CValue(aLStack80);
                                      lib::L2CValue::L2CValue(aLStack80,0x13455c51bc);
                                      lib::L2CValue::L2CValue
                                                (aLStack112,
                                                 _FIGHTER_STATUS_ITEM_THROW_WORK_INT_MOTION_KIND_OPPOSITE
                                                );
                                      lVar3 = lib::L2CValue::as_integer(aLStack80);
                                      iVar1 = lib::L2CValue::as_integer(aLStack112);
                                      app::lua_bind::WorkModule__set_int64_impl
                                                (this->moduleAccessor,lVar3,iVar1);
                                    }
                                    else {
                                      lib::L2CValue::L2CValue(aLStack80,0x13455c51bc);
                                      lib::L2CValue::L2CValue
                                                (aLStack112,
                                                 _FIGHTER_STATUS_ITEM_THROW_WORK_INT_MOTION_KIND);
                                      lVar3 = lib::L2CValue::as_integer(aLStack80);
                                      iVar1 = lib::L2CValue::as_integer(aLStack112);
                                      app::lua_bind::WorkModule__set_int64_impl
                                                (this->moduleAccessor,lVar3,iVar1);
                                      lib::L2CValue::_L2CValue(aLStack112);
                                      lib::L2CValue::_L2CValue(aLStack80);
                                      lib::L2CValue::L2CValue(aLStack80,0x176265cf32);
                                      lib::L2CValue::L2CValue
                                                (aLStack112,
                                                 _FIGHTER_STATUS_ITEM_THROW_WORK_INT_MOTION_KIND_OPPOSITE
                                                );
                                      lVar3 = lib::L2CValue::as_integer(aLStack80);
                                      iVar1 = lib::L2CValue::as_integer(aLStack112);
                                      app::lua_bind::WorkModule__set_int64_impl
                                                (this->moduleAccessor,lVar3,iVar1);
                                    }
                                    lib::L2CValue::_L2CValue(aLStack112);
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
                }
              }
            }
          }
        }
      }
    }
  }
  app::lua_bind::ControlModule__clear_command_impl(this->moduleAccessor,false);
  app::lua_bind::ControlModule__reset_flick_x_impl(this->moduleAccessor);
  app::lua_bind::ControlModule__reset_flick_sub_x_impl(this->moduleAccessor);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1c);
  lib::L2CValue::L2CValue(aLStack80,0xfe);
  lib::L2CValue::operator_(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::ControlModule__reset_flick_y_impl(this->moduleAccessor);
  app::lua_bind::ControlModule__reset_flick_sub_y_impl(this->moduleAccessor);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1d);
  lib::L2CValue::L2CValue(aLStack80,0xfe);
  lib::L2CValue::operator_(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::ControlModule__reset_trigger_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_ITEM_THROW_WORK_INT_SITUATION);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_ITEM_THROW_WORK_FLAG_LOOP_FIRST);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::status_ItemThrow_Loop(this);
  lib::L2CValue::L2CValue(aLStack80,ItemThrow_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

