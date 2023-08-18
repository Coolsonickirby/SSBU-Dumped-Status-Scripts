
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::JumpAerial_pre(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack256,true);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar2 = lib::L2CValue::as_integer(aLStack256);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack352,iVar2);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KIND_PICKEL);
    uVar3 = lib::L2CValue::operator__(aLStack352,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_TYPE_JUMP_AERIAL);
      lib::L2CValue::L2CValue(aLStack160,0);
      FUN_7100222c50(aLStack176,this);
      lib::L2CValue::L2CValue(aLStack256,true);
      uVar3 = lib::L2CValue::operator__(aLStack176,aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,aLStack160);
        FUN_7100222eb0(aLStack256,aLStack176);
        lib::L2CValue::operator_(aLStack96,aLStack256);
        lib::L2CValue::operator_(aLStack112,aLStack240);
        lib::L2CValue::operator_(aLStack128,aLStack224);
        lib::L2CValue::operator_(aLStack144,aLStack208);
        lib::L2CValue::operator_(aLStack160,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack176);
      }
      lib::L2CValue::L2CValue(aLStack256,aLStack96);
      lib::L2CValue::L2CValue(aLStack272,aLStack112);
      lib::L2CValue::L2CValue(aLStack288,aLStack128);
      lib::L2CValue::L2CValue(aLStack304,aLStack144);
      lib::L2CValue::L2CValue(aLStack320,aLStack160);
      lib::L2CValue::L2CValue(aLStack336,true);
      lua2cpp::L2CFighterCommon::status_pre_JumpAerial_param
                (this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0,
                 (L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack352);
      return;
    }
    lib::L2CValue::_L2CValue(aLStack352);
  }
  lua2cpp::L2CFighterCommon::status_pre_JumpAerial(this);
  return;
}

