
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiiswordsmanTornadoshot::status::Fly_main
          (L2CWeaponMiiswordsmanTornadoshot *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *this_00;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  int in_stack_fffffffffffffeb4;
  undefined in_stack_fffffffffffffebc;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  ulong local_80;
  ulong uStack120;
  ulong uStack112;
  ulong uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)&uStack112,0x3538a83b3);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&uStack112);
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
  fVar9 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&uStack112,false);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&uStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    FUN_7100042fd0(aLStack144,this,aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&uStack112,&DAT_7100043730);
  lib::L2CValue::operator_(this_00,(L2CValue *)&uStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
  lib::L2CValue::L2CValue(aLStack192,0x14383a70d8);
  lib::L2CValue::L2CValue(aLStack208,0x31ed91fca);
  HVar5 = lib::L2CValue::as_hash(aLStack192);
  HVar7 = lib::L2CValue::as_hash(aLStack208);
  uStack120 = _FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N;
  local_80 = FIGHTER_STATUS_TRANSITION_TERM_ID_FINAL;
  uStack112 = local_80;
  uStack104 = uStack120;
  uVar2 = app::lua_bind::EffectModule__req_follow_impl
                    (this->moduleAccessor,HVar5,HVar7,(Vector3f *)&uStack112,(Vector3f *)&local_80,
                     1.0,false,0,0,-1,in_stack_fffffffffffffeb4,0,(bool)in_stack_fffffffffffffebc,
                     false);
  lib::L2CValue::L2CValue(aLStack176,uVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&uStack112,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&uStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0x1a712fd786);
    lib::L2CValue::L2CValue(aLStack208,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,-4.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    HVar5 = lib::L2CValue::as_hash(aLStack192);
    HVar7 = lib::L2CValue::as_hash(aLStack208);
    uVar6 = lib::L2CValue::as_number(aLStack224);
    lVar10 = lib::L2CValue::as_number(aLStack240);
    uVar2 = lib::L2CValue::as_number(aLStack256);
    uStack112 = uVar6 & 0xffffffff | lVar10 << 0x20;
    uStack104 = (ulong)uVar2;
    uStack120 = _FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N;
    local_80 = FIGHTER_STATUS_TRANSITION_TERM_ID_FINAL;
    uVar2 = app::lua_bind::EffectModule__req_follow_impl
                      (this->moduleAccessor,HVar5,HVar7,(Vector3f *)&uStack112,(Vector3f *)&local_80
                       ,1.0,false,0,0,-1,in_stack_fffffffffffffeb4,0,(bool)in_stack_fffffffffffffebc
                       ,false);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,uVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&uStack112,iVar3);
  lib::L2CValue::L2CValue
            (aLStack192,_WEAPON_MIISWORDSMAN_TORNADOSHOT_INSTANCE_WORK_ID_INT_PREV_STATUS);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
  lib::L2CValue::L2CValue((L2CValue *)&uStack112,Fly_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
  return;
}

