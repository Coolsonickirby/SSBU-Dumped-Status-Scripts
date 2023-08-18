
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::EflameSpecialNAttack_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_INT_VOICE_PLAY_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__count_down_int_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_INT_VOICE_KIND_NUM);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    iVar3 = FIGHTER_KIND_KIRBY;
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    uVar5 = lib::L2CValue::operator__(aLStack64,pLVar4);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,1);
        uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x153f32af63);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          iVar3 = app::lua_bind::SoundModule__play_se_impl
                            (this->moduleAccessor,HVar6,true,false,false,false,0);
          lib::L2CValue::L2CValue(aLStack64,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x189c553469);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          iVar3 = app::lua_bind::SoundModule__play_se_impl
                            (this->moduleAccessor,HVar6,true,false,false,false,0);
          lib::L2CValue::L2CValue(aLStack64,iVar3);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x15d13cce4f);
        HVar6 = lib::L2CValue::as_hash(aLStack96);
        iVar3 = app::lua_bind::SoundModule__play_se_impl
                          (this->moduleAccessor,HVar6,true,false,false,false,0);
        lib::L2CValue::L2CValue(aLStack64,iVar3);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,1);
        uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x17dfb94f81);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          iVar3 = app::lua_bind::SoundModule__play_se_impl
                            (this->moduleAccessor,HVar6,true,false,false,false,0);
          lib::L2CValue::L2CValue(aLStack64,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x1a12279903);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          iVar3 = app::lua_bind::SoundModule__play_se_impl
                            (this->moduleAccessor,HVar6,true,false,false,false,0);
          lib::L2CValue::L2CValue(aLStack64,iVar3);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x1731b72ead);
        HVar6 = lib::L2CValue::as_hash(aLStack96);
        iVar3 = app::lua_bind::SoundModule__play_se_impl
                          (this->moduleAccessor,HVar6,true,false,false,false,0);
        lib::L2CValue::L2CValue(aLStack64,iVar3);
      }
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

