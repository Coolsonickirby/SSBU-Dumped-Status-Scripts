
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponTantanPunch1::SetStatusScripts(L2CWeaponTantanPunch1 *this)

{
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar1 = _WEAPON_TANTAN_PUNCH1_STATUS_KIND_NUM;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  uVar2 = lib::L2CValue::as_integer(pLVar3);
  lua2cpp::L2CAgentBase::reserve_status_data_array((L2CAgentBase *)this,uVar2);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_SHOOT);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Shoot_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BACK);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Back_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BOUND);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Bound_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_ATTACK_HOLD);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::AttackHold_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DAMAGE);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Damage_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_SHOOT);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Shoot_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BACK);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Back_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BOUND);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Bound_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_ATTACK_HOLD);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::AttackHold_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DAMAGE);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Damage_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_SHOOT);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Shoot_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BACK);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Back_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BOUND);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Bound_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_ATTACK_HOLD);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::AttackHold_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DAMAGE);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Damage_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_READY);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamReady_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_READY);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamReady_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_READY);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamReady_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_START);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamStart_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_START);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamStart_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_START);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamStart_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_SHOOT_LOOP);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamShootLoop_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_SHOOT_LOOP);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamShootLoop_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_SHOOT_LOOP);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamShootLoop_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_KIRBY_START);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::KirbyStart_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_KIRBY_START);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::KirbyStart_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_KIRBY_START);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::KirbyStart_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BACK);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BACK);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Back_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BACK);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BACK);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Back_exec_stop);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BACK);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_MAP_CORRECTION);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BACK);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_FIX_CAMERA);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_READY);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_READY);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamReady_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_READY);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_READY);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamReady_exec_stop);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_READY);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_MAP_CORRECTION);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_READY);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_FIX_CAMERA);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_START);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_START);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamStart_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_START);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_START);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamStart_exec_stop);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_START);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_MAP_CORRECTION);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_START);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_FIX_CAMERA);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_SHOOT_LOOP);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_SHOOT_LOOP);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamShootLoop_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_SHOOT_LOOP);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_SHOOT_LOOP);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamShootLoop_exec_stop);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_SHOOT_LOOP);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_MAP_CORRECTION);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_SHOOT_LOOP);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_FIX_CAMERA);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_exec_stop);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_MAP_CORRECTION);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_FIX_CAMERA);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::DragonBeamEnd_fix_cam);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CWeaponCommon::sub_weapon_common_settings((L2CWeaponCommon *)this);
  return;
}

