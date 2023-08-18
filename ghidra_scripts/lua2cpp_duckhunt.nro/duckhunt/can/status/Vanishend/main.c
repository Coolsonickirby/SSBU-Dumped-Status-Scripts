
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntCan::status::Vanishend_main(L2CWeaponDuckhuntCan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *this_00;
  float fVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
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
  ulong local_60;
  ulong uStack88;
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,0xfa06bb067);
  fVar5 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar5);
  fVar5 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar5);
  fVar5 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,fVar5);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,1.0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,-1);
  HVar4 = lib::L2CValue::as_hash(aLStack128);
  uVar7 = lib::L2CValue::as_number(aLStack144);
  lVar8 = lib::L2CValue::as_number(aLStack160);
  uVar6 = lib::L2CValue::as_number(aLStack176);
  local_50 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack72 = (ulong)uVar6;
  uVar7 = lib::L2CValue::as_number(aLStack192);
  lVar8 = lib::L2CValue::as_number(aLStack208);
  uVar6 = lib::L2CValue::as_number(aLStack224);
  local_60 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack88 = (ulong)uVar6;
  fVar5 = (float)lib::L2CValue::as_number(aLStack240);
  uVar6 = lib::L2CValue::as_integer(aLStack256);
  iVar2 = lib::L2CValue::as_integer(aLStack272);
  uVar6 = app::lua_bind::EffectModule__req_impl
                    (this->moduleAccessor,HVar4,(Vector3f *)&local_50,(Vector3f *)&local_60,fVar5,
                     uVar6,iVar2,false,0);
  lib::L2CValue::L2CValue(aLStack112,uVar6);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_EXPLODE_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,false);
    FUN_71000166a0(aLStack128,this,aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,&DAT_7100016810);
  lib::L2CValue::operator_(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,Vanishend_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

