
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDededeJethammer::status::Attack_exit(L2CWeaponDededeJethammer *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_KIND_START);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_KIND_WAIT);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_KIND_WALK);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_KIND_TURN);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_KIND_JUMPSQUAT);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
            lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_KIND_JUMP);
            uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar5 & 1) == 0) {
              pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
              lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_KIND_PASS);
              uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar5 & 1) == 0) {
                pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
                lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_KIND_FALL);
                uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                if ((uVar5 & 1) == 0) {
                  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
                  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_KIND_LANDING);
                  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
                  lib::L2CValue::_L2CValue(aLStack80);
                  if ((uVar5 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack80,_EFFECT_SUB_ATTRIBUTE_SYNC_STOP);
                    lib::L2CValue::L2CValue(aLStack96,true);
                    lib::L2CValue::L2CValue(aLStack112,true);
                    uVar3 = lib::L2CValue::as_integer(aLStack80);
                    bVar1 = lib::L2CValue::as_bool(aLStack96);
                    bVar2 = lib::L2CValue::as_bool(aLStack112);
                    app::lua_bind::EffectModule__kill_all_impl
                              (this->moduleAccessor,uVar3,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
                    lib::L2CValue::_L2CValue(aLStack112);
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
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

