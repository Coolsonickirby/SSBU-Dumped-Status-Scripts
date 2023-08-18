
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMurabito::status::SpecialLwWaterLanding_exit
          (L2CFighterMurabito *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack96,pLVar2);
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessShoot_exitShoot_Common(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_WAIT);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_WALK_F);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_WALK_BRAKE_F)
      ;
      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_WALK_B);
        uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_WALK_BRAKE_B);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) == 0) {
            pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_DASH_F)
            ;
            uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar3 & 1) == 0) {
              pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
              lib::L2CValue::L2CValue
                        (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_DASH_B);
              uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar3 & 1) == 0) {
                pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
                lib::L2CValue::L2CValue
                          (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_JUMP_SQUAT);
                uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                if ((uVar3 & 1) == 0) {
                  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
                  lib::L2CValue::L2CValue
                            (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_JUMP);
                  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
                  lib::L2CValue::_L2CValue(aLStack80);
                  if ((uVar3 & 1) == 0) {
                    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
                    lib::L2CValue::L2CValue
                              (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_AIR);
                    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
                    lib::L2CValue::_L2CValue(aLStack80);
                    if ((uVar3 & 1) == 0) {
                      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
                      lib::L2CValue::L2CValue
                                (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_LANDING);
                      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
                      lib::L2CValue::_L2CValue(aLStack80);
                      if ((uVar3 & 1) == 0) {
                        lib::L2CValue::L2CValue(aLStack80,true);
                        bVar1 = lib::L2CValue::as_bool(aLStack80);
                        app::lua_bind::ItemModule__set_change_status_event_impl
                                  (this->moduleAccessor,(bool)(bVar1 & 1));
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
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

