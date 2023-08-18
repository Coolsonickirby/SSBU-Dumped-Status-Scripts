
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN3Walk_init(L2CFighterPickel *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_WALK);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    fVar3 = (float)app::FighterSpecializer_Pickel::get_special_n3_walk_speed_max();
    lib::L2CValue::L2CValue(aLStack64,fVar3);
    FUN_710002e160(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack96,0x9fece0d5d);
    lib::L2CValue::L2CValue(aLStack112,0xb4fb275bd);
    lib::L2CValue::L2CValue(aLStack128,0x9eeaf3544);
    lib::L2CValue::L2CValue(aLStack144,aLStack96);
    lib::L2CValue::L2CValue(aLStack160,aLStack112);
    lib::L2CValue::L2CValue(aLStack176,aLStack128);
    lib::L2CValue::L2CValue(aLStack192,false);
    lib::L2CValue::operator_(aLStack64,aLStack80);
    lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init_common_param
              (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

