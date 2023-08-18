
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPichu::status::FinalAttack2_end(L2CFighterPichu *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  uint uVar6;
  long lVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong uStack80;
  ulong uStack72;
  
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_PIKACHU_STATUS_KIND_FINAL_END);
  uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_PIKACHU_STATUS_KIND_FINAL_ATTACK);
    uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_PIKACHU_STATUS_KIND_FINAL_ATTACK_2);
      uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&uStack80);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      if ((uVar4 & 1) == 0) {
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&uStack80,_FIGHTER_PIKACHU_STATUS_KIND_FINAL_ATTACK_FINISH);
        uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&uStack80);
        lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
        if ((uVar4 & 1) == 0) {
          FUN_7100019e20(&uStack80,this);
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKACHU_VORTEX_STATUS_KIND_END);
          iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar1,iVar2);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
          lib::L2CValue::L2CValue((L2CValue *)&uStack80,0x1e0aba2d68);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack80);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
          lib::L2CValue::L2CValue((L2CValue *)&uStack80,0x10b7ba6a16);
          HVar5 = lib::L2CValue::as_hash((L2CValue *)&uStack80);
          app::lua_bind::EffectModule__remove_screen_impl(this->moduleAccessor,HVar5,-1);
          lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          uVar4 = lib::L2CValue::as_number(aLStack112);
          lVar7 = lib::L2CValue::as_number(aLStack128);
          uVar6 = lib::L2CValue::as_number(aLStack144);
          uStack80 = uVar4 & 0xffffffff | lVar7 << 0x20;
          uStack72 = (ulong)uVar6;
          app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&uStack80,0);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
        }
      }
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_STAGE_GRAVITY);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_KO_SURVIVE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

