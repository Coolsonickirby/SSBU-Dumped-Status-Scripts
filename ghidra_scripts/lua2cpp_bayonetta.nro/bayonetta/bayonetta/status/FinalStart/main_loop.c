
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::FinalStart_main_loop(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar2);
  lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack144,0x1ef10d6cd8);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_START_DISABLE_ZOOM_IN);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar4 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack128,0x18c728283b);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
      lib::L2CValue::L2CValue(aLStack144,0);
      lib::L2CValue::L2CValue(aLStack192,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack208,0x1877508f47);
      uVar4 = lib::L2CValue::as_integer(aLStack192);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack176,fVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,45.0);
      lib::L2CValue::operator_((L2CValue *)&local_50,aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      fVar6 = (float)lib::L2CValue::as_number(aLStack160);
      uStack72 = FIGHTER_ATTACK100_TYPE_NONE;
      local_50 = FIGHTER_KIND_RYU;
      app::lua_bind::CameraModule__zoom_in_impl
                (this->moduleAccessor,iVar2,iVar3,fVar6,(Vector2f *)&local_50,false);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar2);
  lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack144,0x20e990a26f);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::operator__((L2CValue *)&local_50,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar2);
  lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack144,0x1053bdb152);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_SCENE01);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

