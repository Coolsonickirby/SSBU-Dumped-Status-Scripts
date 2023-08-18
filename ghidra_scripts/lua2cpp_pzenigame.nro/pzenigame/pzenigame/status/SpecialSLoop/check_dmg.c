
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPzenigame::status::SpecialSLoop_check_dmg
          (L2CFighterPzenigame *this,L2CValue *return_value)

{
  byte bVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *in_x1;
  float fVar6;
  undefined8 uVar7;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack224,in_x1);
  bVar1 = app::lua_bind::DamageModule__is_damage_lock_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack160,true);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0xc238ce5fd);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar3,0x5330809b6);
    lib::L2CValue::L2CValue(aLStack80,pLVar3);
    lib::L2CValue::L2CValue(aLStack160,0x12c7990841);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,0x1330ee124e);
      uVar2 = lib::L2CValue::operator__(aLStack80,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack160,0x13a0a379de);
        uVar2 = lib::L2CValue::operator__(aLStack80,aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack160,0x1468dc84cd);
          uVar2 = lib::L2CValue::operator__(aLStack80,aLStack160);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((uVar2 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack160,0x179c4e24c5);
            uVar2 = lib::L2CValue::operator__(aLStack80,aLStack160);
            lib::L2CValue::_L2CValue(aLStack160);
            if ((uVar2 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack160,0x1d73cd1464);
              uVar2 = lib::L2CValue::operator__(aLStack80,aLStack160);
              lib::L2CValue::_L2CValue(aLStack160);
              if ((uVar2 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack160,0x177f259087);
                uVar2 = lib::L2CValue::operator__(aLStack80,aLStack160);
                lib::L2CValue::_L2CValue(aLStack160);
                if ((uVar2 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack112,0.0);
                  lib::L2CValue::L2CValue(aLStack128,0.0);
                  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
                  lib::L2CValue::_L2CValue(aLStack128);
                  lib::L2CValue::_L2CValue(aLStack112);
                  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
                  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
                  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_ENERGY_ID_STOP);
                  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
                  uVar7 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
                  lib::L2CValue::L2CValue(aLStack160,(float)uVar7);
                  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar7 >> 0x20));
                  lib::L2CValue::operator_(pLVar3,aLStack160);
                  lib::L2CValue::operator_(pLVar4,aLStack144);
                  lib::L2CValue::_L2CValue(aLStack144);
                  lib::L2CValue::_L2CValue(aLStack160);
                  lib::L2CValue::_L2CValue(aLStack176);
                  lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
                  lib::L2CValue::L2CValue(aLStack192,0x1282f2f453);
                  uVar2 = lib::L2CValue::as_integer(aLStack176);
                  uVar5 = lib::L2CValue::as_integer(aLStack192);
                  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                           (this->moduleAccessor,uVar2,uVar5);
                  lib::L2CValue::L2CValue(aLStack160,fVar6);
                  lib::L2CValue::_L2CValue(aLStack192);
                  lib::L2CValue::_L2CValue(aLStack176);
                  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0xc238ce5fd);
                  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar3,0x6ffab8a01);
                  lib::L2CValue::operator_(pLVar3,aLStack160);
                  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0xa66ec16de);
                  lib::L2CValue::operator_(aLStack192,pLVar3);
                  lib::L2CValue::_L2CValue(aLStack192);
                  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
                  lib::L2CValue::operator_(aLStack176);
                  lib::L2CValue::operator_(pLVar3,aLStack208);
                  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
                  lib::L2CValue::operator_(pLVar3,aLStack192);
                  lib::L2CValue::_L2CValue(aLStack192);
                  lib::L2CValue::_L2CValue(aLStack208);
                  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
                  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
                  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
                  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar3);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar4);
                  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
                  lib::L2CValue::_L2CValue(aLStack192);
                  lib::L2CValue::L2CValue((L2CValue *)return_value,true);
                  lib::L2CValue::_L2CValue(aLStack176);
                  lib::L2CValue::_L2CValue(aLStack160);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::_L2CValue(aLStack80);
                  goto LAB_71000019f0;
                }
              }
            }
          }
        }
      }
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,false);
LAB_71000019f0:
  lib::L2CValue::_L2CValue(aLStack224);
  return;
}

