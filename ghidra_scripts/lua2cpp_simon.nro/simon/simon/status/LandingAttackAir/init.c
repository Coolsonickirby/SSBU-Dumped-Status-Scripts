
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSimon::status::LandingAttackAir_init(L2CFighterSimon *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,lVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack64,0xc3a4e2597);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xc3495ada5);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xf4594b21c);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0xfdbf74a7b);
        uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0xc33f869bc);
          uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,0xfcaf6254b);
            uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,0xf5495dd2c);
              uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
              lib::L2CValue::_L2CValue(aLStack64);
              if ((uVar3 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack64,0xdde67d935);
                uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
                lib::L2CValue::_L2CValue(aLStack64);
                if ((uVar3 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack64,0x1b64c11828);
                  lib::L2CValue::operator_(aLStack96,aLStack64);
                  lib::L2CValue::_L2CValue(aLStack64);
                  lib::L2CValue::L2CValue(aLStack64,0xd40042152);
                  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
                  lib::L2CValue::_L2CValue(aLStack64);
                  if ((uVar3 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack64,0xfb51aa832);
                    lib::L2CValue::operator_(aLStack112,aLStack64);
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack64,0xec50d73a9);
                    lib::L2CValue::operator_(aLStack112,aLStack64);
                  }
                }
                else {
                  lib::L2CValue::L2CValue(aLStack64,0x1bfaa2e04f);
                  lib::L2CValue::operator_(aLStack96,aLStack64);
                  lib::L2CValue::_L2CValue(aLStack64);
                  lib::L2CValue::L2CValue(aLStack64,0xe5b6e8bce);
                  lib::L2CValue::operator_(aLStack112,aLStack64);
                }
                goto LAB_710000ab34;
              }
            }
          }
          lib::L2CValue::L2CValue(aLStack64,0x1a4262b54f);
          lib::L2CValue::operator_(aLStack96,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,0xd5f9a4aee);
          lib::L2CValue::operator_(aLStack112,aLStack64);
          goto LAB_710000ab34;
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack64,0x1a450f7156);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xd58f78ef7);
    lib::L2CValue::operator_(aLStack112,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0x1a4bd4f964);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xd562c06c5);
    lib::L2CValue::operator_(aLStack112,aLStack64);
  }
LAB_710000ab34:
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,aLStack112);
  lib::L2CValue::L2CValue(aLStack128,aLStack96);
  lib::L2CValue::L2CValue(aLStack144,0);
  lua2cpp::L2CFighterCommon::sub_landing_attack_air_init
            (this,(L2CValue)0xc0,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

