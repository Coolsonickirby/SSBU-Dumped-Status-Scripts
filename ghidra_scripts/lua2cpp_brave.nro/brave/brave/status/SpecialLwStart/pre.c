
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwStart_pre(L2CFighterBrave *this,L2CValue *return_value)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  FighterBraveSpecialLwVariousKind FVar7;
  SituationKind SVar8;
  uint uVar9;
  GroundCliffCheckKind GVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  L2CValue *pLVar16;
  L2CTable *this_00;
  uint in_stack_fffffffffffffe94;
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack184,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_DECIDE_COMMAND);
  iVar6 = lib::L2CValue::as_integer(aLStack184);
  iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack168,iVar6);
  lib::L2CValue::L2CValue(aLStack216,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_VARIOUS_KIND);
  iVar6 = lib::L2CValue::as_integer(aLStack216);
  iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack200,iVar6);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND15_VARIOUS);
  uVar15 = lib::L2CValue::operator__(aLStack168,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar15 & 1) != 0) {
    FVar7 = lib::L2CValue::as_integer(aLStack200);
    cVar1 = app::FighterSpecializer_Brave::get_special_lw_various_kind2command(FVar7);
    lib::L2CValue::L2CValue(aLStack136,(int)cVar1);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND_NONE);
    uVar15 = lib::L2CValue::operator__(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((uVar15 & 1) == 0) {
      lib::L2CValue::operator_(aLStack168,aLStack136);
    }
    lib::L2CValue::_L2CValue(aLStack136);
  }
  if ((((byte)app::lua_bind::FighterManager__is_end_movie_impl & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(app::lua_bind::FighterManager__is_end_movie_impl), iVar6 != 0)) {
    this_00 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(this_00,0);
    lib::L2CValue::L2CValue((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,this_00);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND01_CURE);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND02_FLASH1);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND03_FLASH2);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND04_EXPLOSION1);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND05_EXPLOSION2);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND06_DEATHBALL1);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND07_DEATHBALL2);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND08_FULLBURST);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND09_CRASH);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_STEEL_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND10_STEEL);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND11_SPEED_UP);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND12_ATTACK_UP);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND13_REFLECT);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND14_SLEEP);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND15_VARIOUS);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_FLYING_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND16_FLYING);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND17_FIRESWORD);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND18_ICESWORD);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND19_IRONSWORD);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND20_DEVILSWORD);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar6 = _FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START;
    pLVar16 = (L2CValue *)
              lib::L2CValue::operator__
                        ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                         _FIGHTER_BRAVE_SPECIAL_LW_COMMAND21_CHARGE);
    lib::L2CValue::L2CValue(aLStack120,iVar6);
    lib::L2CValue::operator_(pLVar16,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    FUN_7100000300(lib::L2CValue::_L2CValue,app::lua_bind::SoundModule__set_auto_se_pitch_impl,
                   &PTR_LOOP_71002d6000);
    __cxa_guard_release(app::lua_bind::FighterManager__is_end_movie_impl);
  }
  pLVar16 = (L2CValue *)
            lib::L2CValue::operator__
                      ((L2CValue *)app::lua_bind::SoundModule__set_auto_se_pitch_impl,aLStack168);
  lib::L2CValue::L2CValue(aLStack152,pLVar16);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START);
  uVar15 = lib::L2CValue::operator__(aLStack152,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar15 & 1) == 0) {
    iVar6 = lib::L2CValue::as_integer(aLStack152);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack120,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_DECIDE_COMMAND);
    iVar6 = lib::L2CValue::as_integer(aLStack120);
    iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack184,iVar6);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_VARIOUS_KIND);
    iVar6 = lib::L2CValue::as_integer(aLStack232);
    iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack216,iVar6);
    FUN_71000398f0(aLStack136,aLStack184,aLStack216);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON);
    lib::L2CValue::operator_(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::operator_(aLStack136,aLStack232);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_KINETIC_TYPE_UNIQ);
    lib::L2CValue::L2CValue(aLStack248,GROUND_CORRECT_KIND_KEEP);
    lib::L2CValue::L2CValue(aLStack264,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack280,true);
    lib::L2CValue::L2CValue(aLStack296,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::L2CValue(aLStack312,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::L2CValue(aLStack328,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lib::L2CValue::L2CValue(aLStack344,0);
    SVar8 = lib::L2CValue::as_integer(aLStack120);
    iVar6 = lib::L2CValue::as_integer(aLStack232);
    uVar9 = lib::L2CValue::as_integer(aLStack248);
    GVar10 = lib::L2CValue::as_integer(aLStack264);
    bVar2 = lib::L2CValue::as_bool(aLStack280);
    iVar11 = lib::L2CValue::as_integer(aLStack296);
    iVar12 = lib::L2CValue::as_integer(aLStack312);
    iVar13 = lib::L2CValue::as_integer(aLStack328);
    lib::L2CValue::as_integer(aLStack344);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar8,iVar6,uVar9,GVar10,(bool)(bVar2 & 1),iVar11,iVar12,iVar13,
               in_stack_fffffffffffffe94);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,false);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_TREADED_KIND_NO_REAC);
    lib::L2CValue::L2CValue(aLStack248,false);
    lib::L2CValue::L2CValue(aLStack264,false);
    lib::L2CValue::L2CValue(aLStack280,false);
    lib::L2CValue::L2CValue(aLStack296,_FIGHTER_STATUS_ATTR_START_TURN);
    lib::L2CValue::L2CValue(aLStack312,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_LW);
    lib::L2CValue::L2CValue(aLStack328,0);
    bVar2 = lib::L2CValue::as_bool(aLStack120);
    iVar6 = lib::L2CValue::as_integer(aLStack232);
    bVar3 = lib::L2CValue::as_bool(aLStack248);
    bVar4 = lib::L2CValue::as_bool(aLStack264);
    bVar5 = lib::L2CValue::as_bool(aLStack280);
    uVar15 = lib::L2CValue::as_integer(aLStack136);
    uVar9 = lib::L2CValue::as_integer(aLStack296);
    uVar14 = lib::L2CValue::as_integer(aLStack312);
    lib::L2CValue::as_integer(aLStack328);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (this->moduleAccessor,(bool)(bVar2 & 1),iVar6,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
               (bool)(bVar5 & 1),uVar15,uVar9,uVar14,in_stack_fffffffffffffe94);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack136);
  }
  lib::L2CValue::_L2CValue(aLStack152);
  return;
}

