
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSzerosuit::status::SpecialLwKick_exit(L2CFighterSzerosuit *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SZEROSUIT_STATUS_KIND_SPECIAL_LW_START);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SZEROSUIT_STATUS_KIND_SPECIAL_LW_KICK);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SZEROSUIT_STATUS_KIND_SPECIAL_LW_STEP);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SZEROSUIT_STATUS_KIND_SPECIAL_LW_FLIP);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SZEROSUIT_STATUS_KIND_SPECIAL_LW_LANDING);
            uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar5 & 1) == 0) {
              pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
              lib::L2CValue::L2CValue
                        (aLStack80,_FIGHTER_SZEROSUIT_STATUS_KIND_SPECIAL_LW_KICK_LANDING);
              uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_REVERSE)
                ;
                iVar3 = lib::L2CValue::as_integer(aLStack96);
                bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
                lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
                bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue(aLStack96);
                if ((bVar2 & 1U) != 0) {
                  app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
                  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
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

