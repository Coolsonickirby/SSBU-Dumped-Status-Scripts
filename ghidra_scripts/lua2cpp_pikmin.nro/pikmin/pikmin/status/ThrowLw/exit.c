
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::ThrowLw_exit(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,pLVar2);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack96,pLVar2);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_CATCH_RETURN);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_CATCH_WAIT);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_CATCH_ATTACK);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_THROW_B);
        uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_THROW_F);
          uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_THROW_HI);
            uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_THROW_LW);
              uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
              lib::L2CValue::_L2CValue(aLStack64);
              if ((uVar3 & 1) == 0) {
                app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
                lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_CATCH_DASH);
                uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
                lib::L2CValue::_L2CValue(aLStack64);
                if ((uVar3 & 1) == 0) {
LAB_71000256a8:
                  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_THROW_B);
                  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
                  lib::L2CValue::_L2CValue(aLStack64);
                  if ((uVar3 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_THROW_F);
                    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
                    lib::L2CValue::_L2CValue(aLStack64);
                    if ((uVar3 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_THROW_HI);
                      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
                      lib::L2CValue::_L2CValue(aLStack64);
                      if ((uVar3 & 1) == 0) {
                        lib::L2CValue::L2CValue
                                  (aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_THROW_LW);
                        uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
                        lib::L2CValue::_L2CValue(aLStack64);
                        if ((uVar3 & 1) == 0) {
                          lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_NO_CONSTRAINT);
                          lib::L2CValue::L2CValue(aLStack112,0x18a6e37a82);
                          iVar1 = lib::L2CValue::as_integer(aLStack64);
                          HVar4 = lib::L2CValue::as_hash(aLStack112);
                          app::lua_bind::LinkModule__send_event_parents_impl
                                    (this->moduleAccessor,iVar1,HVar4);
                          goto LAB_710002583c;
                        }
                      }
                    }
                  }
                  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_GROUND_FOLLOW)
                  ;
                  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
                  lib::L2CValue::_L2CValue(aLStack64);
                  if ((uVar3 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_WAIT);
                    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
                    lib::L2CValue::_L2CValue(aLStack64);
                    if ((uVar3 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_NO_CONSTRAINT);
                      lib::L2CValue::L2CValue(aLStack112,0x18a6e37a82);
                      iVar1 = lib::L2CValue::as_integer(aLStack64);
                      HVar4 = lib::L2CValue::as_hash(aLStack112);
                      app::lua_bind::LinkModule__send_event_parents_impl
                                (this->moduleAccessor,iVar1,HVar4);
                      goto LAB_710002583c;
                    }
                  }
                }
                else {
                  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_GROUND_FOLLOW)
                  ;
                  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
                  lib::L2CValue::_L2CValue(aLStack64);
                  if ((uVar3 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_WAIT);
                    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
                    lib::L2CValue::_L2CValue(aLStack64);
                    if ((uVar3 & 1) == 0) goto LAB_71000256a8;
                  }
                  lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_NO_CONSTRAINT);
                  lib::L2CValue::L2CValue(aLStack112,0x19468b540a);
                  iVar1 = lib::L2CValue::as_integer(aLStack64);
                  HVar4 = lib::L2CValue::as_hash(aLStack112);
                  app::lua_bind::LinkModule__send_event_parents_impl
                            (this->moduleAccessor,iVar1,HVar4);
LAB_710002583c:
                  lib::L2CValue::_L2CValue(aLStack112);
                  lib::L2CValue::_L2CValue(aLStack64);
                }
                lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                goto LAB_71000255a8;
              }
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000255a8:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

