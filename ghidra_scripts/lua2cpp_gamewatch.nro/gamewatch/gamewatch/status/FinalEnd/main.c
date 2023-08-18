
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::FinalEnd_main(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *this_00;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack160,false);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
  uVar2 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,true);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_OCTOPUS);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_KIND_END);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar3,iVar4,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack160);
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,*pfVar5);
  lib::L2CValue::L2CValue(aLStack144,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar5[2]);
  FUN_710001de50(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0x569ff9e1b);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  lib::L2CValue::operator_(pLVar7,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0x51ef8ae8d);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar7,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
  uVar8 = lib::L2CValue::as_number(pLVar6);
  uVar9 = lib::L2CValue::as_number(pLVar7);
  uVar10 = lib::L2CValue::as_number(this_00);
  local_60 = CONCAT44(uVar9,uVar8);
  uStack88 = (ulong)uVar10;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  uVar8 = lib::L2CValue::as_number(pLVar6);
  uVar9 = lib::L2CValue::as_number(pLVar7);
  local_60 = CONCAT44(uVar9,uVar8);
  uStack88 = 0;
  app::lua_bind::GroundModule__set_shape_safe_pos_impl(this->moduleAccessor,(Vector2f *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  FUN_710001df10(this);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FinalEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

