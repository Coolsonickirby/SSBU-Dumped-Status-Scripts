
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSonic::status::SpecialNHomingStart_main(L2CFighterSonic *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  Hash40 HVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  int in_stack_ffffffffffffff44;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 uStack112;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 uStack80;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_FORCE_LOUPE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,0x164ef3b42f);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&uStack112,1.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&uStack80);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&uStack112);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_80);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,0x50000000);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_SONIC_STATUS_SPECIAL_N_HOMING_WORK_INT_TARGET_OBJECT_ID)
  ;
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::L2CValue(aLStack144,0x1214039bcf);
  lib::L2CValue::L2CValue(aLStack160,0x655f96687);
  HVar5 = lib::L2CValue::as_hash(aLStack144);
  HVar6 = lib::L2CValue::as_hash(aLStack160);
  uStack120 = _LUA_SCRIPT_LINE_STATUS_SYSTEM;
  local_80 = LUA_SCRIPT_LINE_SYSTEM_POST;
  uStack112 = local_80;
  uStack104 = uStack120;
  local_60 = local_80;
  uStack88 = uStack120;
  uStack80 = local_80;
  uStack72 = uStack120;
  uVar4 = app::lua_bind::EffectModule__req_on_joint_impl
                    (this->moduleAccessor,HVar5,HVar6,(Vector3f *)&uStack80,(Vector3f *)&local_60,
                     1.0,(Vector3f *)&uStack112,(Vector3f *)&local_80,false,0,
                     in_stack_ffffffffffffff44,0);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,uVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SpecialNHomingStart_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  return;
}

